<?php
	session_start();
	require_once('userheader.php');
	if(isset($_SESSION['username']) && $_SESSION['username']!='') {
		header('Location:user/userhome.php');
	}
	else{
?>

	<div class="container-fluid corporate" style="padding-top: 180px!important; padding-bottom: 100px">
		<div class="container forgot">
			<div class="row">
				<div class="col-md-2"></div>
				<div class="col-md-8 login-form">
					<div class="card" style="width: auto;">
						<div class="card-body">
						    <h1 class="card-title">Password Reset</h1>
						    <form action="resetpassword.php" method="post" class="formcontrol text-left">
						    	<div class="row" id="group">
							        <div class="form-group col-12">
							            <label>Username : </label><br>
							            <input type="text" name="username" id="username" placeholder="Enter Username">
							            <?php if(isset($_GET['role']) && $_GET['role']==1){ ?>
							            	<input type="hidden" name="role_id" value="1">
							            <?php }else if(isset($_GET['role']) && $_GET['role']==2){ ?>
							            	<input type="hidden" name="role_id" value="2">
							            <?php } ?>
							             <?php 
										     if(isset($_GET['reset_error']) && $_GET['reset_error']==2){
										 ?>
										 <div class="usererror text-danger text-center">Username Does Not Exist</div>
										 <?php
										 	}
										 ?>
							        </div>
							    </div>
						        <div class="text-center" id="btn">
						          	<button type="submit" class="sign">Submit</button>
						           	<a href="login.php" class="cancel">Cancel</a>
						        </div>
						    </form>
						    <?php 
						     if(isset($_GET['reset_pass']) && $_GET['reset_pass']==1){
							?>
							<script type="text/javascript">
							    document.getElementById('group').style.display = "none";
							    document.getElementById('btn').style.display = "none";
							</script>
							  <?php
							      $username=$_GET['username'];
							      echo "<form action='changepassword.php' method='post' class='formcontrol text-left' id='changepassword'>
							      <div class='row'>
							        <div class='form-group col-12'>
								        <input type='text' name='username1' value='$username' readonly>
								        <input type='password' placeholder='New Password' name='password' id='password'>
							        	<input type='password' placeholder='Re-type Password' name='repassword' id='repassword' oninput='checkpass();'>
							        	<div class='text-center text-danger passerror'></div>
								    </div>
								  </div>
								  <div class='text-center'>
							        <button type='submit' class='sign' id='submitpassword'>Submit</button>
						           	<a href='login.php' class='cancel'>Cancel</a>
							      </div>
							    </form>";
							    }
							  ?>
						</div>
					</div>
				</div>
				<div class="col-md-2"></div>
			</div>
		</div>
	</div>


<?php
		require_once('userfooter.php');
	}
?>