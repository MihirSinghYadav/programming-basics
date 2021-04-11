<?php
	session_start();
	$id=$_SESSION['userid'];
	require_once('../config.php');
	$name=$_POST['name'];
	$email=$_POST['email'];
	$username=$_POST['username'];
	$password=$_POST['password'];
	$contact=$_POST['contact'];
	$city=$_POST['city'];
	$address=$_POST['address'];
	$date=date('y-m-d h:i:s');
	$update="UPDATE `cibil_system_user` SET `name`='$name', `email`='$email', `contact`='$contact', `city`='$city', `address`='$address', `update_date`='$date' WHERE `id`='$id'";
	mysqli_query($conn,$update);
	$updatepass="UPDATE `cibil_system_login` SET `password`='$password' WHERE `username`='$username'";
	mysqli_query($conn,$updatepass);
	header('Location:userprofile.php?success=1');
?>