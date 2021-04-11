<?php
	session_start();
	require_once('../config.php');
	$improvement=$_POST['improvement'];
	$id=$_SESSION['userid'];
	$date=date('y-m-d h:i:s');
	$update="UPDATE `cibil_system_improvement` SET `improvement`='$improvement', `status`='Pending' WHERE `user_id`='$id'";
	mysqli_query($conn,$update);
	$updateuser="UPDATE `cibil_system_user` SET `update_date`='$date' WHERE `id`='$id'";
	mysqli_query($conn,$updateuser);
	header('Location:userimprovement.php?success=1');
?>