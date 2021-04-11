<?php
	session_start();
	require_once('../../config.php');
	$user_id=$_GET['user_id'];
	$select="SELECT `cibil_system_approval`.* , `cibil_system_improvement`.user_id FROM `cibil_system_approval` JOIN `cibil_system_improvement` ON `cibil_system_approval`.user_id=`cibil_system_improvement`.user_id WHERE `cibil_system_approval`.user_id='$user_id'";
	$query=mysqli_query($conn,$select);
	$response=array();
	while($res=mysqli_fetch_object($query)){
		$response[]=$res;
	}
	echo json_encode($response);
?>