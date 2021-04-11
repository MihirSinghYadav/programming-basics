<?php
	require_once('../config.php');
	$name=$_POST['name'];
	$email=$_POST['email'];
	$bank=$_POST['bank'];
	$contact=$_POST['contact'];
	$username=$_POST['username'];
	$password=$_POST['password'];
	$date=date('y-m-d h:i:s');
	$selectuser="SELECT `username` FROM cibil_system_login WHERE username='$username'";
	$queryuser=mysqli_query($conn,$selectuser);
	$count=mysqli_num_rows($queryuser);
	if($count==0){
		$insert="INSERT INTO `cibil_system_login` (`username`,`password`,`role`,`register_date`) values('$username', '$password', 'corporate', '$date')";
		mysqli_query($conn,$insert);
		$select="SELECT `id` FROM `cibil_system_login` WHERE `username`='$username'";
		$query=mysqli_query($conn,$select);
		$res=mysqli_fetch_object($query);
		$insertcorp="INSERT INTO `cibil_system_corporate` (`name`, `email`, `contact`, `login_id`, `bank_id`) values('$name','$email','$contact','$res->id','$bank')";
		mysqli_query($conn,$insertcorp);
		header('Location:../login.php?registercorp=1');
	}
	else{
		header('Location:registercorp.php?register_error=1');
	}
?>