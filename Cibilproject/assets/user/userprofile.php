<?php
	session_start();
	require_once('userheader.php');
	if(isset($_SESSION['username']) && $_SESSION['username']!='') {
		require_once('../config.php');
		$id=$_SESSION['userid'];
		$select="SELECT `cibil_system_user`.*, `cibil_system_bankname`.* FROM `cibil_system_user` JOIN `cibil_system_bankname` ON `cibil_system_user`.bank_id=`cibil_system_bankname`.id WHERE `cibil_system_user`.id='$id'";
		$query=mysqli_query($conn,$select);
		$res=mysqli_fetch_object($query);
?>

	<div class="corporate" style="padding-top: 170px!important; padding-bottom: 100px; padding-left: 0; padding-right: 0;">
		<div class="container userprofile">
			<h1 class="text-center">MY PROFILE &nbsp <a href="edituser.php"><i class="fa fa-pencil-square" aria-hidden="true"></i></a></h1>
			<div class="row table justify-content-left">
				<table>
					<tbody>
						<tr>
							<td class="name">Name : </td>
							<td class="details"> <?php echo $res->name; ?> </td>
						</tr>
						<tr>
							<td class="name">Email : </td>
							<td class="details" style="text-transform: lowercase;"> <?php echo $res->email; ?> </td>
						</tr>
						<tr>
							<td class="name">Gender : </td>
							<td class="details"> <?php echo $res->gender; ?></td>
						</tr>
						<tr>
							<td class="name">Bank Name : </td>
							<td class="details"> <?php echo $res->bank_name; ?> </td>
						</tr>
						<tr>
							<td class="name">Contact : </td>
							<td class="details"> <?php echo $res->contact; ?> </td>
						</tr>
						<tr>
							<td class="name">City : </td>
							<td class="details"> <?php echo $res->city; ?> </td>
						</tr>
						<tr>
							<td class="name">Address : </td>
							<td class="details"> <?php echo $res->address; ?> </td>
						</tr>
					</tbody>
				</table>
				<div class="col-lg-5 d-lg-block d-none image">
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

<?php 
	if(isset($_GET['success']) && $_GET['success']==1) {
?>
<script type="text/javascript">
	swal("", "Profile Edited Successfully", "success");
	var oldWindowURL = window.location.href;
	var index = oldWindowURL.indexOf('?');
	var newWindowURL = oldWindowURL.substring(0,index);
	window.history.pushState(null, null, newWindowURL);
</script>
<?php
	}
?>