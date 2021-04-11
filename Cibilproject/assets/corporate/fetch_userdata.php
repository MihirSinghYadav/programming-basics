<?php
	session_start();
	$score_id=$_GET['score_id'];
	require_once('../config.php');
	$select="SELECT `cibil_system_userscore`.*, `cibil_system_user`.* FROM `cibil_system_userscore` JOIN `cibil_system_user` ON `cibil_system_userscore`.id=`cibil_system_user`.score_id WHERE `cibil_system_userscore`.id='$score_id'";
	$query=mysqli_query($conn,$select);
	$res=mysqli_fetch_assoc($query);
	echo json_encode($res);
?>