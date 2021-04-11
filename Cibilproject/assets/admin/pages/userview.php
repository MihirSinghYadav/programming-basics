<?php 
  session_start();
  if(isset($_SESSION['admin_name']) && $_SESSION['admin_name']!="" && $_SESSION['admin_role']=='admin'){
  	require_once('header.php');
    require_once('../../config.php');
    $select="SELECT `cibil_system_user`.* , `cibil_system_bankname`.*, `cibil_system_login`.* FROM `cibil_system_user` JOIN `cibil_system_bankname` ON `cibil_system_user`.bank_id=`cibil_system_bankname`.id JOIN `cibil_system_login` ON `cibil_system_user`.login_id=`cibil_system_login`.id WHERE `cibil_system_login`.role='user' ORDER BY `cibil_system_user`.id DESC";
    $query=mysqli_query($conn,$select); 
    $selectbank="SELECT * FROM `cibil_system_bankname`";
    $querybank=mysqli_query($conn,$selectbank);
?>

  <style type="text/css">
    .content{
      margin-top: 2%;
    }
    img{
      width:150px;
      height: 100px;
    }
    .image_modal{
    	width:400px;
    	height:300px;
    }
    .prodsuccess{
      color:green;
    }
    .btn{
    	padding:5px 10px;
    	margin-bottom: 5px;
    }

    #example1{
      overflow-x: auto;
    }

    .blocker{
      z-index: 6000!important;
    }

    .updateuser{
      background: #D3DCE3!important;
      overflow: visible;
      max-width:90rem;
    }

    .updateuser .rows{
      margin-bottom: 15px;
    }

    .updateuser label{
      font-size:16px;
      color:black;
    }

    .updateuser .form-control{
      border-color: gray;
    }

    .updateuser h1{
      margin-bottom: 25px;
      color:black; 
      font-weight: bold; 
      text-transform: uppercase; 
      text-align: center;
    }

    .updateuser input[type="radio"] {
      display:none;
    }

    .updateuser input[type="radio"] + label{
      cursor:pointer;
    }

    .updateuser input[type="radio"] + label span {
        display:inline-block;
        width:14px;
        height:14px;
        margin:-1px 4px 0 0;
        vertical-align:middle;
        background:gray;
        border-radius:50%;
        cursor:pointer;
    }

    .updateuser input[type="radio"]:checked + label span {
        background:#1BB1DC;
        height:15px;
        width:15px;
        border-radius: 50%;
        border:2px solid white;
    }
  </style>

<link rel="stylesheet" href="../bower_components/datatables.net-bs/css/dataTables.bootstrap.min.css">
<link rel="stylesheet" href="../dist/css/AdminLTE.min.css">


  <title>AdminPANEL | View Users</title>
 <!-- Content Wrapper. Contains page content -->
  <div class="content-wrapper">
    <!-- Content Header (Page header) -->
    <section class="content-header">
      <h1>
        Users
        <small>Control panel</small>
      </h1>
      <ol class="breadcrumb">
        <li><a href="dashboard.php"><i class="fa fa-dashboard"></i> Home</a></li>
        <li><a href="">Users</a></li>
        <li class="active">View Users</li>
      </ol>
    </section>

    <!-- Main content -->
    <section class="content">

      <!-- Main row -->
      <div class="row">
        <div class="col-xs-12">
          <div class="box">
            <div class="box-header">
              <h3 class="box-title text-bold">USER DETAILS</h3>
              <a type="button" class="pull-right btn btn-primary" href="#add-form" rel="modal:open">Add New User</a>
            </div>
            <!-- /.box-header -->
            <div class="box-body table-responsive">
              <table id="example1" class="table table-bordered table-striped ">
                <thead>
                <tr>
                  <th>ID</th>
                  <th>Name</th>
                  <th>Email</th>
                  <th>Gender</th>
                  <th>Bank Name</th>
                  <th>Contact</th>
                  <th>City</th>
                  <th>Address</th>
                  <th>Register Date</th>
                  <th>Update Date</th>
                </tr>
                </thead>
                <tbody>
                <?php
                  $i=1;
                  while($res=mysqli_fetch_object($query)){
                ?>
                <tr>
                  <td><?php echo $i++; ?></td>
                  <td><?php echo $res->name; ?></td>
                  <td><?php echo $res->email; ?></td>
                  <td><?php echo $res->gender; ?></td>
                  <td><?php echo $res->bank_name; ?></td>
                  <td><?php echo $res->contact; ?></td>
                  <td><?php echo $res->city; ?></td>
                  <td><?php echo $res->address; ?></td>
                  <td><?php echo $res->register_date; ?></td>
                  <td><?php echo $res->update_date; ?></td>
                </tr>
                <?php
                  }
                ?>
                </tbody>
                <tfoot>
                <tr>
                  <th>ID</th>
                  <th>Name</th>
                  <th>Email</th>
                  <th>Gender</th>
                  <th>Bank Name</th>
                  <th>Contact</th>
                  <th>City</th>
                  <th>Address</th>
                  <th>Register Date</th>
                  <th>Update Date</th>
                </tr>
                </tfoot>
              </table>
            </div>
            <!-- /.box-body -->
          </div>
          <!-- /.box -->
        </div>
      </div>
      <!-- /.row (main row) -->

    </section>
    <!-- /.content -->

  </div>
  <!-- /.content-wrapper -->


  <div class="modal updateuser" id="add-form">
    <h1>Add User</h1>
    <form action="adduser.php" method="post" id="adduseradminform">
      <div class="modal-body">
        <div class="row rows">
          <div class="col-xs-6">
            <label>Name : </label><br>
            <input type="text" name="name" id="name" class="form-control" placeholder="Enter Full Name">
            <div class="nameerror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label>Email : </label><br>
            <input type="email" name="email" class="form-control" id="email" placeholder="Enter Email">
            <div class="emailerror text-danger"></div>
          </div>
        </div>
        <div class="row rows justify-content-center align-self-center">
          <div class="col-xs-6"><br>
            <label>Gender : &nbsp</label>
            <input type="radio" id="male" name="gender" class="form-control" checked value="Male">
            <label for="male"><span></span>&nbspMale</label>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
            <input type="radio" id="female" name="gender" value="Female">
            <label for="female"><span></span>&nbspFemale</label>
          </div>
          <div class="col-xs-6">
            <label>Bank : </label>
            <select name="bank" id="bank" class="form-control">
              <option selected disabled>-- Select Bank --</option>
              <?php
                while($resbank=mysqli_fetch_object($querybank)){ 
              ?>
                <option value="<?php echo $resbank->id; ?>"> <?php echo $resbank->bank_name; ?> </option>
              <?php 
                } 
              ?>
            </select>
            <div class="bankerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label>Username : </label><br>
            <input type="text" name="username" class="form-control" id="username" placeholder="Enter Username">
            <div class="usererror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label>Password : </label><br>
            <input type="password" name="password" class="form-control" id="password" placeholder="Enter Password">
            <div class="passerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label>Credit Card Dues : </label><br>
            <input type="text" name="ccdues" id="ccdues" class="form-control" placeholder="Enter Credit Card Dues (0 or 2)">
            <div class="ccerror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label>CC Dues Remarks : </label><br>
            <input type="text" name="ccdues_query" id="ccdues_query" class="form-control" placeholder="Enter Credit Card Dues Remarks">
            <div class="ccqerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label>Pending Loan : </label><br>
            <input type="text" name="pending_loan" id="pending_loan" class="form-control" placeholder="Enter Pending Loan (0 or 1)">
            <div class="plerror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label>PL Remarks : </label><br>
            <input type="text" name="pending_loan_query" id="pending_loan_query" class="form-control" placeholder="Enter Pending Loan Remarks">
            <div class="plqerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label>Check Bounce : </label><br>
            <input type="text" name="check_bounce" id="check_bounce" class="form-control" placeholder="Enter Check Bounce (0 or 1)">
            <div class="cberror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label>CB Remarks : </label><br>
            <input type="text" name="check_bounce_query" id="check_bounce_query" class="form-control" placeholder="Enter Check Bounce Remarks">
            <div class="cbqerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label>Other Scams : </label><br>
            <input type="text" name="scam" id="scam" class="form-control" placeholder="Enter Scam (0 or 1)">
            <div class="serrro text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label>Scam Remarks : </label><br>
            <input type="text" name="scam_query" id="scam_query" class="form-control" placeholder="Enter Scam Remarks">
            <div class="sqerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-6">
            <label>Contact No : </label><br>
            <input type="text" name="contact" id="contact" class="form-control" placeholder="Enter Contact No">
            <div class="contacterror text-danger"></div>
          </div>
          <div class="col-xs-6">
            <label>City : </label><br>
            <input type="text" name="city" id="city" class="form-control" placeholder="Enter City Name">
            <div class="cityerror text-danger"></div>
          </div>
        </div>
        <div class="row rows">
          <div class="col-xs-12">
            <label>Address : </label><br>
            <textarea name="address" id="address" rows="4" class="form-control"></textarea>
            <div class="addresserror text-danger"></div>
          </div>
        </div>
        <div class="text-center text-dark">
          <button class="btn btn-success" id="adduseradminsubmit">Add</button>
          <a type="cancel" href="" class="btn btn-primary">Cancel</a>
        </div>
        <input type="hidden" name="user_id">
      </div>
    </form>
  </div>




<?php
	require_once('footer.php');
  }
  else if($_SESSION['admin_role']=='sub-admin'){
    header('Location:userimprovement.php');
  }else{
    require_once('error.php');
  }
?>
<script src="../bower_components/datatables.net/js/jquery.dataTables.min.js"></script>
<script src="../bower_components/datatables.net-bs/js/dataTables.bootstrap.min.js"></script>
<!-- SlimScroll -->
<script src="../bower_components/jquery-slimscroll/jquery.slimscroll.min.js"></script>
<!-- FastClick -->
<script src="../bower_components/fastclick/lib/fastclick.js"></script>
<script type="text/javascript">

  $(function () {
    $('#example1').DataTable()
    $('#example2').DataTable({
      'paging'      : true,
      'lengthChange': false,
      'searching'   : false,
      'ordering'    : true,
      'info'        : true,
      'autoWidth'   : true,
      'scrollX' : true,
    });
  });

  $('#user').siblings('li').removeClass('active');
  var a=document.getElementById('user');
  a.classList.add('active');
  var b=document.getElementById('view_user');
  b.classList.add('active');
</script>

<script type="text/javascript">
  $(document).ready(function(){
    $('#name').keyup(function(event) {
        $('.nameerror').text("");
    })
    $('#email').keyup(function(event) {
        $('.emailerror').text("");
    })
    $('#bank').change(function(event){
        $('.bankerror').text("");
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
    $('#ccdues').keyup(function(event) {
        $('.ccerror').text("");
    })
    $('#ccdues_query').keyup(function(event) {
        $('.ccqerror').text("");
    })
    $('#pending_loan').keyup(function(event) {
        $('.plerror').text("");
    })
    $('#pending_loan_query').keyup(function(event) {
        $('.plqerror').text("");
    })
    $('#check_bounce').keyup(function(event) {
        $('.cberror').text("");
    })
    $('#check_bounce_query').keyup(function(event) {
        $('.cbqerror').text("");
    })
    $('#scam').keyup(function(event) {
        $('.serrro').text("");
    })
    $('#scam_query').keyup(function(event) {
        $('.sqerror').text("");
    })
  });


</script>

<?php
  if(isset($_GET['success']) && $_GET['success']==1){
?>
<script type="text/javascript">
  swal("","User Added Successfully","success");
</script>
<?php 
  }
  if(isset($_GET['error']) && $_GET['error']==1){
?>
<script type="text/javascript">
  swal("Username Already Exists","Please try another username","error");
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