<?php
	session_start();
	require_once('userheader.php');
	if(isset($_SESSION['username']) && $_SESSION['username']!='') {
		require_once('../config.php');
		$id=$_SESSION['userid'];
		$select="SELECT `cibil_system_user`.*, `cibil_system_userscore`.*,`cibil_system_improvement`.* FROM `cibil_system_user` JOIN `cibil_system_userscore` ON `cibil_system_user`.id=`cibil_system_userscore`.user_id JOIN `cibil_system_improvement` ON `cibil_system_user`.id=`cibil_system_improvement`.user_id WHERE `cibil_system_user`.id='$id'";
		$query=mysqli_query($conn,$select);
		$res=mysqli_fetch_object($query);
?>

<link rel="stylesheet" type="text/css" href="https://cdn.datatables.net/1.10.19/css/jquery.dataTables.min.css">

	<div class="corporate" style="padding-top: 170px!important; padding-bottom: 100px; padding-left: 0; padding-right: 0;">
		<div class="container-fluid cibilscore">
			<h1>Improvement Reports</h1>
			<div class="row" style="background: #2d2b46; color: white; border-radius: 20px; ">
			    <table id="example" class="display nowrap table-striped border text-center" style="width:100%">
			        <thead>
			            <tr>
			                <th>Name</th>
			                <th>Email</th>
			                <th>Credit Dues Details</th>
			                <th>Pending Loans Details</th>
			                <th>Check Bounce Details</th>
			                <th>Other Scam</th>
			                <th>Improvement Report</th>
			                <th>Status</th>
			            </tr>
			        </thead>
			        <tbody>
			            <tr>
			                <td> <?php echo $res->name; ?> </td>
			                <td> <?php echo $res->email; ?> </td>
			                <td> <?php echo $res->ccdues_query; ?> </td>
			                <td> <?php echo $res->pendingloan_query; ?> </td>
			                <td> <?php echo $res->bouncecheck_query; ?> </td>
			                <td> <?php echo $res->scam_query; ?> </td>
			                <td> <?php echo $res->improvement; ?> </td>
			                <td> <?php if($res->status=='Rejected'){
			                    echo "<div class='text-danger' style='font-weight:bold;'>".$res->status."</div>";
			                  }else if($res->status=='Approved'){
			                    echo "<div class='text-success' style='font-weight:bold;'>".$res->status."</div>";
			                  }else if($res->status=='Pending'){
			                    echo "<div style='font-weight:bold; color:#D35400'>".$res->status."</div>";
			                  }
			                  else{
			                  	echo $res->status;
			                  }
			                  	?> 
			              	</td>
			            </tr>
			        </tbody>
			    </table>
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

<script type="text/javascript" src="https://cdn.datatables.net/1.10.19/js/jquery.dataTables.min.js"></script>

<script type="text/javascript">
    $(document).ready(function() {
        $('#example').DataTable( {
            "scrollX": true
        } );
        $('#example1').DataTable( {
            "scrollX": true
        } );
        $('th').removeClass('sorting');
        $('th').removeClass('sorting_asc');
    } );
</script>

<?php 
	if(isset($_GET['success']) && $_GET['success']==1) {
?>
<script type="text/javascript">
	swal("", "Improvement Sent Successfully", "success");
	var oldWindowURL = window.location.href;
	var index = oldWindowURL.indexOf('?');
	var newWindowURL = oldWindowURL.substring(0,index);
	window.history.pushState(null, null, newWindowURL);
</script>
<?php
	}
?>