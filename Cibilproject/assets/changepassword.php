<?php
	require_once('config.php');
	$username=$_POST['username1'];
	$password=$_POST['password'];
	$update="UPDATE `cibil_system_login` SET `password`='$password' WHERE `username`='$username'";
	mysqli_query($conn,$update);
	header('Location:login.php?passchange=1');
?>

