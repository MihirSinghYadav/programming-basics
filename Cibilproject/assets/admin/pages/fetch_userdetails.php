<?php 
	session_start();
	$user_id=$_GET['user_id'];
	require_once('../../config.php');
    $select="SELECT `cibil_system_user`.* , `cibil_system_userscore`.*, `cibil_system_improvement`.* FROM `cibil_system_user` JOIN `cibil_system_userscore` ON `cibil_system_user`.score_id=`cibil_system_userscore`.id JOIN `cibil_system_improvement` ON `cibil_system_improvement`.user_id=`cibil_system_user`.id WHERE `cibil_system_userscore`.user_id='$user_id'";
    $query=mysqli_query($conn,$select);
    $res=mysqli_fetch_object($query);
    echo json_encode($res);
?>