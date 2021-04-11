<?php
	session_start();
	if(isset($_SESSION['corpname']) && $_SESSION['corpname']!='') {
		require_once('userheader.php');
		require_once('../config.php');
		$username=$_SESSION['corpusername'];
		$select="SELECT `cibil_system_corporate`.* , `cibil_system_login`.* FROM `cibil_system_corporate` JOIN `cibil_system_login` ON `cibil_system_corporate`.login_id=`cibil_system_login`.id WHERE `cibil_system_login`.username='$username'";
		$query=mysqli_query($conn,$select);
		$res=mysqli_fetch_object($query);
?>

	<div class="container-fluid corporate" style="padding-top: 180px!important; padding-bottom: 100px;">
		<div class="container">
			<div class="col-md-12 login-form">
				<div class="card" style="width: auto;">
					<div class="card-body">
					    <h1 class="card-title" style="color:white;">Edit Profile</h1>
					    <form action="editcorporatedetails.php" method="post" class="formcontrol text-left" id="editcorpform">
					    	<div class="row">
						        <div class="form-group col-6">
						            <label>Name : </label><br>
						            <input type="text" name="name" id="name" placeholder="Enter Full Name" value="<?php echo $res->name; ?>">
						            <div class="nameerror text-danger"></div>
						        </div>
						        <div class="form-group col-6">
						            <label>Email : </label><br>
						            <input type="email" name="email" id="email" placeholder="Enter Email" value="<?php echo $res->email; ?>">
						            <div class="emailerror text-danger"></div>
						        </div>
						    </div>
						    <div class="row justify-content-center">
						        <div class="form-group col-12">
						            <label>Contact No : </label><br>
						            <input type="text" name="contact" id="contact" placeholder="Enter Contact No" value="<?php echo $res->contact; ?>">
						            <div class="contacterror text-danger"></div>
						        </div>
						    </div>
						    <div class="row">
						        <div class="form-group col-6">
						            <label>Username : </label><br>
						            <input type="text" name="username" id="username" title="Username Cannot be Changed" value="<?php echo $res->username; ?>" readonly>
						            <div class="usererror text-danger"></div>
						        </div>
						        <div class="form-group col-6">
						            <label>Password : </label><br>
							        <input type="text" name="password" id="password" placeholder="Enter Password" value="<?php echo $res->password; ?>">
						            <div class="passerror text-danger"></div>
						        </div>
						    </div>
					        <div class="text-center">
					          	<button type="submit" class="sign" id="editcorpsubmit">Submit</button>
					           	<a href="corporateprofile.php" class="cancel" style="text-decoration: none; border:1px solid gray;">Cancel</a><br><br>
					        </div>
					    </form>
					</div>
				</div>
			</div>
		</div>
	</div>


<?php
		require_once('userfooter.php');
	}
	else{
		header('Location:../error.php');
	}
?>

<script type="text/javascript">
    $('#username').css('background-color','#99A3A4');
</script>