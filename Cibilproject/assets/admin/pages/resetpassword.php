<?php
	require_once('../../config.php');
	$username=$_POST['username'];
	$selectusername="SELECT * FROM `cibil_system_login` WHERE username='$username' AND NOT `role`='user' AND NOT `role`='corporate'";
	$query=mysqli_query($conn,$selectusername);
	if($username!=""){
		if(mysqli_num_rows($query)>0){
			header('Location:forgotpassword.php?reset_pass=1'.'&username='.$username);
		}
		else{
			header('Location:forgotpassword.php?reset_error=2');
		}
	}
	else{
		header('Location:forgotpassword.php?reset_error=1');
	}
?>