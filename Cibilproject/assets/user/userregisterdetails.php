<?php
	require_once('../config.php');
	$name=$_POST['name'];
	$email=$_POST['email'];
	$gender=$_POST['gender'];
	$username=$_POST['username'];
	$password=$_POST['password'];
	$contact=$_POST['contact'];
	$city=$_POST['city'];
	$bank=$_POST['bank'];
	$address=$_POST['address'];
	$date=date('y-m-d h:i:s');
	$selectuser="SELECT `username` FROM cibil_system_login WHERE username='$username'";
	$queryuser=mysqli_query($conn,$selectuser);
	$count=mysqli_num_rows($queryuser);
	if($count==0){
		$insert="INSERT INTO `cibil_system_login` (`username`,`password`,`role`,`register_date`) values('$username', '$password', 'user', '$date')";
		mysqli_query($conn,$insert);
		$select="SELECT `role`,`id` FROM `cibil_system_login` WHERE `username`='$username'";
		$query=mysqli_query($conn,$select);
		$res=mysqli_fetch_object($query);
		$insertuser="INSERT INTO `cibil_system_user` (`name`,`email`,`gender`,`login_id`,`bank_id`,`contact`,`city`,`address`,`register_date`,`update_date`,`addbyid`) values('$name','$email','$gender','$res->id','$bank','$contact','$city','$address','$date','$date','$res->role')";
		mysqli_query($conn,$insertuser);
		$selectid="SELECT id FROM cibil_system_user WHERE `login_id`=$res->id";
		$queryid=mysqli_query($conn,$selectid);
		$resid=mysqli_fetch_object($queryid);
		$insertscore="INSERT INTO `cibil_system_userscore` (`user_id`,`ccdues`,`ccdues_query`,`pending_loan`,`pendingloan_query`,`bounce_check`,`bouncecheck_query`,`scam`,`scam_query`,`score`) values('$resid->id','0','NA','0','NA','0','NA','0','NA','0')";
		mysqli_query($conn,$insertscore);
		$selectscore="SELECT id FROM `cibil_system_userscore` WHERE `user_id`='$resid->id'";
		$queryscore=mysqli_query($conn,$selectscore);
		$resscore=mysqli_fetch_object($queryscore);
		$update="UPDATE `cibil_system_user` SET `score_id`=$resscore->id WHERE `login_id`=$res->id";
		mysqli_query($conn,$update);
		$insertimprov="INSERT INTO `cibil_system_improvement` (`user_id`,`improvement`,`status`,`approved_by`,`approved_date`) VALUES('$resid->id','NA','NA','NA','$date')";
		mysqli_query($conn,$insertimprov);
		header('Location:../login.php?registeruser=1');
	}
	else{
		header('Location:register.php?register_error=1');
	}

?>