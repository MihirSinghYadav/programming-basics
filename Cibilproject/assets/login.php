<?php
	session_start();
	require_once('userheader.php');
	if(isset($_SESSION['username']) && $_SESSION['username']!='') {
		header('Location:user/userhome.php');
	}
	else if(isset($_SESSION['corpname']) && $_SESSION['corpname']!=''){
		header('Location:corporate/corporatehome.php');
	}
	else{
?>

<body>
	<div class="container-fluid corporate" style="padding-top: 180px!important; padding-bottom: 100px; padding-left: 0; padding-right: 0;">
		<div class="container split">
			<div class="row justify-content-center align-self-center">
				  <div class="col-3 align-self-center">
				    <div class="nav flex-column nav-pills" id="v-pills-tab" role="tablist" aria-orientation="vertical">
				      <a class="nav-link active clear" id="v-pills-home-tab" data-toggle="pill" href="#v-pills-home" role="tab" aria-controls="v-pills-home" aria-selected="true">
				      	<div class="text-center">
				      		<img src="../img/login_icon/user.png">
				      		<h3>User Login</h3>
				      	</div>
				      </a>
				      <a class="nav-link clear" id="v-pills-profile-tab corporate" data-toggle="pill" href="#v-pills-profile" role="tab" aria-controls="v-pills-profile" aria-selected="false">
				      	<div class="text-center">
				      		<img src="../img/login_icon/corporate.png">
				      		<h3>Corporate Login</h3>
				      	</div>
				      </a>
				    </div>
				  </div>
				  <div class="col-9">
				    <div class="tab-content" id="v-pills-tabContent">
				      <div class="tab-pane fade show active" id="v-pills-home" role="tabpanel" aria-labelledby="v-pills-home-tab">
				      	<div class="col-md-12 login-form">
							<div class="card" style="width: auto;">
							  <div class="card-body">
							    <h1 class="card-title" style="color: white;">User Login</h1>
							    <form action="user/userlogindetails.php" method="post" role="form" class="formcontrol text-left" id="userlogin">
					                <div class="form-group">
					                  <label>Username : </label><br>
					                  <input type="text" name="username" id="username" placeholder="Enter Username">
					                  <div class="usererror text-danger"></div>
					                </div>
					                <div class="form-group">
					                  <label>Password : </label><br>
					                  <input type="password" name="password" id="password" placeholder="Enter Password">
					                  <div class="passerror text-danger"></div>
					                </div>
					                <div class="text-right">
					                	<a href="forgotpassword.php?role=1">Forgot Password ?</a>
					                </div>
					                <div class="text-center">
					                	<button type="submit" class="sign" id="submituserform">Sign In</button>
					                	<button type="reset" class="cancel">Cancel</button>
					                	<p>Dont Have an Account? <a href="user/register.php">Register</a></p>
					                </div>
					              </form>
							  </div>
							</div>
						</div>
				      </div>
				      <div class="tab-pane fade" id="v-pills-profile" role="tabpanel" aria-labelledby="v-pills-profile-tab">
				      	<div class="col-md-12 login-form">
							<div class="card" style="width: auto;">
							  <div class="card-body">
							    <h1 class="card-title" style="color: white;">Corporate Login</h1>
							    <form action="corporate/corplogindetails.php" method="post" class="formcontrol text-left" id="corplogin">
					                <div class="form-group">
					                  <label>Username : </label><br>
					                  <input type="text" name="username1" id="username1" placeholder="Enter Username">
					                  <div class="corperror text-danger"></div>
					                </div>
					                <div class="form-group">
					                  <label>Password : </label><br>
					                  <input type="password" name="password1" id="password1" placeholder="Enter Password">
					                  <div class="corppasserror text-danger"></div>
					                </div>
					                <div class="text-right">
					                	<a href="forgotpassword.php?role=2">Forgot Password ?</a>
					                </div>
					                <div class="text-center">
					                	<button class="sign" id="submitcorpform">Sign In</button>
					                	<button type="reset" class="cancel">Cancel</button>
					                	<p>Dont Have an Account? <a href="corporate/registercorp.php">Register</a></p>
					                </div>
					              </form>
							  </div>
							</div>
						</div>
				      </div>
				    </div>
				  </div>
			</div>
		</div>
	</div>

</body>

<?php
		require_once('userfooter.php');
	}
?>

<script type="text/javascript">
	$('#username').keyup(function(event) {
	    $('.usererror').text("");
	})
	$('#username1').keyup(function(event) {
	    $('.corperror').text("");
	})
	$('#password').keyup(function(event) {
	    $('.passerror').text("");
	})
	$('#password1').keyup(function(event) {
	    $('.corppasserror').text("");
	})
</script>

<?php 
	if(isset($_GET['error']) && $_GET['error']==1) {
?>
<script type="text/javascript">
	swal("", "Incorrect Username or Password!", "error");
</script>
<?php
	}

	if(isset($_GET['registercorp']) && $_GET['registercorp']==1) {
?>
<script type="text/javascript">
	swal("", "Registered Successfuly", "success");
</script>
<?php
	}

	if(isset($_GET['registeruser']) && $_GET['registeruser']==1) {
?>
<script type="text/javascript">
	swal("", "Registered Successfuly", "success");
</script>
<?php
	}

	if(isset($_GET['passchange']) && $_GET['passchange']==1) {
?>
<script type="text/javascript">
	swal("", "Password Changed Successfuly", "success");
</script>
<?php
	}
?>

<script type="text/javascript">
	var oldWindowURL = window.location.href;
	var index = oldWindowURL.indexOf('?');
	var newWindowURL = oldWindowURL.substring(0,index);
	window.history.pushState(null, null, newWindowURL);
</script>