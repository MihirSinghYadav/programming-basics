<?php
	session_start();
	require_once('../../config.php');
	$adminusername=$_SESSION['admin_username'];
	$selectrole="SELECT role from `cibil_system_login` WHERE `username`='$adminusername'";
	$queryrole=mysqli_query($conn,$selectrole);
	$resrole=mysqli_fetch_object($queryrole);
	$name=$_POST['name'];
	$email=$_POST['email'];
	$gender=$_POST['gender'];
	$username=$_POST['username'];
	$password=$_POST['password'];
	$ccdues=$_POST['ccdues'];
	$ccdues_query=$_POST['ccdues_query'];
	$pending_loan=$_POST['pending_loan'];
	$pending_loan_query=$_POST['pending_loan_query'];
	$check_bounce=$_POST['check_bounce'];
	$check_bounce_query=$_POST['check_bounce_query'];
	$scam=$_POST['scam'];
	$scam_query=$_POST['scam_query'];
	$score=$ccdues + $pending_loan + $check_bounce + $scam;
	$contact=$_POST['contact'];
	$city=$_POST['city'];
	$address=$_POST['address'];
	$bank_id=$_POST['bank'];
	$date=date('y-m-d h:i:s');
	$selectuser="SELECT `username` FROM cibil_system_login WHERE username='$username'";
	$queryuser=mysqli_query($conn,$selectuser);
	$count=mysqli_num_rows($queryuser);
	if($count==0){
		$insertlogin="INSERT INTO `cibil_system_login` (`username`,`password`,`role`,`register_date`) VALUES ('$username','$password','user','$date')";
		mysqli_query($conn,$insertlogin);
		$selectlogin="SELECT id FROM `cibil_system_login` WHERE `username`='$username'";
		$queryselect=mysqli_query($conn,$selectlogin);
		$reslogin=mysqli_fetch_object($queryselect);
		$insertuser="INSERT INTO `cibil_system_user` (`name`,`email`,`gender`,`login_id`,`bank_id`,`contact`,`city`,`address`,`register_date`,`update_date`,`addbyid`) VALUES ('$name','$email','$gender','$reslogin->id','$bank_id','$contact','$city','$address','$date','$date','$resrole->role')";
		mysqli_query($conn,$insertuser);
		$selectuserdata="SELECT id FROM `cibil_system_user` WHERE `login_id`='$reslogin->id'";
		$queryuserdata=mysqli_query($conn,$selectuserdata);
		$resuserdata=mysqli_fetch_object($queryuserdata);
		$insertscore="INSERT INTO `cibil_system_userscore` (`user_id`,`ccdues`,`ccdues_query`,`pending_loan`,`pendingloan_query`,`bounce_check`,`bouncecheck_query`,`scam`,`scam_query`,`score`) VALUES ('$resuserdata->id','$ccdues','$ccdues_query','$pending_loan','$pending_loan_query','$check_bounce','$check_bounce_query','$scam','$scam_query','$score')";
		mysqli_query($conn,$insertscore);
		$selectscore="SELECT id FROM `cibil_system_userscore` WHERE `user_id`='$resuserdata->id'";
		$queryscore=mysqli_query($conn,$selectscore);
		$resscore=mysqli_fetch_object($queryscore);
		$updatescore="UPDATE `cibil_system_user` SET `score_id`='$resscore->id' WHERE id='$resuserdata->id'";
		mysqli_query($conn,$updatescore);
		$insertimprov="INSERT INTO `cibil_system_improvement` (`user_id`,`improvement`,`status`,`approved_by`,`approved_date`) VALUES('$resuserdata->id','NA', 'NA','NA','$date')";
		mysqli_query($conn,$insertimprov);
		$selectbank="SELECT bank_name FROM `cibil_system_bankname` WHERE id='$bank_id'";
		$querybank=mysqli_query($conn,$selectbank);
		$resbank=mysqli_fetch_object($querybank);
		header('Location:mail.php?name='.$name.'&username='.$username.'&password='.$password.'&email='.$email.'&bankname='.$resbank->bank_name);
	}
	else{
		header('Location:userview.php?error=1');
	}
?>