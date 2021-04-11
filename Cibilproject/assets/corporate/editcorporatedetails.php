<?php
	session_start();
	require_once('../config.php');
	$name=$_POST['name'];
	$email=$_POST['email'];
	$contact=$_POST['contact'];
	$username=$_POST['username'];
	$password=$_POST['password'];
	$date=date('y-m-d h:i:s');
	$select="SELECT id FROM `cibil_system_login` WHERE `username`='$username'";
	$query=mysqli_query($conn,$select);
	$res=mysqli_fetch_object($query);
	$updatecorp="UPDATE `cibil_system_corporate` SET `name`='$name', `email`='$email', `contact`='$contact' WHERE `login_id`='$res->id'";
	mysqli_query($conn,$updatecorp);
	$updatepass="UPDATE `cibil_system_login` SET `password`='$password' WHERE `username`='$username'";
	mysqli_query($conn,$updatepass);
	header('Location:corporateprofile.php?success=1');
?>