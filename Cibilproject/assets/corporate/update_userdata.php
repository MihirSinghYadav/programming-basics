<?php
	session_start();
	require_once('../config.php');
	$score_id=$_POST['score_id'];
	$ccdues=$_POST['ccdues'];
	$ccdues_query=$_POST['ccdues_query'];
	$pending_loan=$_POST['pending_loan'];
	$pending_loan_query=$_POST['pending_loan_query'];
	$check_bounce=$_POST['check_bounce'];
	$check_bounce_query=$_POST['check_bounce_query'];
	$scam=$_POST['scam'];
	$scam_query=$_POST['scam_query'];
	$score=$ccdues + $pending_loan + $check_bounce + $scam;
	$date=date('y-m-d h:i:s');
	$updatescore="UPDATE `cibil_system_userscore` SET `ccdues`='$ccdues' , `ccdues_query`='$ccdues_query' , `pending_loan`='$pending_loan' , `pendingloan_query`='$pending_loan_query' , `bounce_check`='$check_bounce' , `bouncecheck_query`='$check_bounce_query' , `scam`='$scam' , `scam_query`='$scam_query' , `score`='$score' WHERE id='$score_id'";
	mysqli_query($conn,$updatescore);
	$updateuser="UPDATE `cibil_system_user` SET `update_date`='$date' WHERE `score_id`='$score_id'";
	mysqli_query($conn,$updateuser);
	header('Location:corporatehome.php?success=2');
?>