<?php
	session_start();
	require_once('userheader.php');
	if(isset($_SESSION['username']) && $_SESSION['username']!='') {
		require_once('../config.php');
		$userid=$_SESSION['userid'];
		$select="SELECT `cibil_system_user`.*, `cibil_system_login`.* FROM `cibil_system_user` JOIN `cibil_system_login` ON `cibil_system_user`.login_id=`cibil_system_login`.id WHERE `cibil_system_user`.id='$userid'";
		$query=mysqli_query($conn,$select);
		$res=mysqli_fetch_object($query);
?>

<style type="text/css">
	
	#intro{
		height: 130vh!important;
	}

</style>

	<div class="corporate" style="padding-top: 170px!important; padding-bottom: 100px; padding-left: 0; padding-right: 0;">
		<div class="container register">
			<div class="col-md-12 login-form">
				<div class="card" style="width: auto;">
					<div class="card-body">
					    <h1 class="card-title" style="color:white;">EDIT PROFILE</h1>
					    <form action="edituserdetails.php" method="post" class="formcontrol text-left" id="edituserform">
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
						    <div class="row">
						        <div class="form-group col-6">
						            <label>Username : </label><br>
						            <input type="text" name="username" id="username" title="Username Cannot Be Changed" value="<?php echo $res->username; ?>" readonly>
						            <div class="usererror text-danger"></div>
						        </div>
						        <div class="form-group col-6">
						            <label>Password : </label><br>
							        <input type="text" name="password" id="password" placeholder="Enter Password" value="<?php echo $res->password; ?>">
						            <div class="passerror text-danger"></div>
						        </div>
						    </div>
						    <div class="row">
								<div class="form-group col-md-6">
						            <label>Contact No : </label><br>
						            <input type="text" name="contact" id="contact" placeholder="Enter Contact No" value="<?php echo $res->contact; ?>">
						            <div class="contacterror text-danger"></div>
						        </div>
						        <div class="form-group col-6">
						            <label>City : </label><br>
						            <input type="text" name="city" id="city" placeholder="Enter Your City" value="<?php echo $res->city; ?>">
						            <div class="cityerror text-danger"></div>
						        </div>
						    </div>
						    <div class="row">
						        <div class="form-group col-12">
						            <label>Address : </label><br>
						            <textarea name="address" rows="4" id="address"> <?php echo $res->address; ?> </textarea>
						            <div class="addresserror text-danger"></div>
						        </div>
						    </div>
					        <div class="text-center">
					          	<button type="submit" class="sign" id="editusersubmit">Submit</button>
					           	<a href="userprofile.php" class="cancel" style="text-decoration: none; border:1px solid gray;">Cancel</a><br><br>
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
	$('#name').keyup(function(event) {
	    $('.nameerror').text("");
	})
	$('#email').keyup(function(event) {
	    $('.emailerror').text("");
	})
	$('#username').keyup(function(event) {
	    $('.usererror').text("");
	})
	$('#password').keyup(function(event) {
	    $('.passerror').text("");
	})
	$('#contact').keyup(function(event) {
	    $('.contacterror').text("");
	})
	$('#city').keyup(function(event) {
	    $('.cityerror').text("");
	})
	$('#address').keyup(function(event) {
	    $('.addresserror').text("");
	})
</script>