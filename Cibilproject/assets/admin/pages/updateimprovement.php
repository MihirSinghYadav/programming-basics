<?php
	session_start();
	require_once('../../config.php');
	$adminname=$_SESSION['admin_name'];
	$user_id=$_POST['user_id'];
	$ccdues=$_POST['ccdues'];
	$ccdues_query=$_POST['ccdues_query'];
	$pending_loan=$_POST['pending_loan'];
	$pending_loan_query=$_POST['pending_loan_query'];
	$check_bounce=$_POST['check_bounce'];
	$check_bounce_query=$_POST['check_bounce_query'];
	$scam=$_POST['scam'];
	$scam_query=$_POST['scam_query'];
	$status=$_POST['status'];
	$score=$ccdues + $pending_loan + $check_bounce + $scam;
	$date=date('y-m-d h:i:s');
	$updatescore="UPDATE `cibil_system_userscore` SET `ccdues`='$ccdues' , `ccdues_query`='$ccdues_query' , `pending_loan`='$pending_loan' , `pendingloan_query`='$pending_loan_query' , `bounce_check`='$check_bounce' , `bouncecheck_query`='$check_bounce_query' , `scam`='$scam' , `scam_query`='$scam_query' , `score`='$score' WHERE user_id='$user_id'";
	mysqli_query($conn,$updatescore);
	$updateuser="UPDATE `cibil_system_user` SET `update_date`='$date' WHERE `user_id`='$user_id'";
	mysqli_query($conn,$updateuser);
	$updateimprov="UPDATE `cibil_system_improvement` SET `status`='$status',`approved_by`='$adminname', `approved_date`='$date' WHERE `user_id`='$user_id'";
	mysqli_query($conn,$updateimprov);
	$insertapproval="INSERT INTO `cibil_system_approval`  (`user_id`,`approved_by`, `status`, `approval_date`) VALUES ('$user_id','$adminname','$status','$date')";
	mysqli_query($conn,$insertapproval);
	header('Location:userimprovement.php?success=1');
?>