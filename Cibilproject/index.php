<?php
  session_start();
  require_once('header.php');
  require_once('assets/config.php');
  $selectuser="SELECT * FROM `cibil_system_user`";
  $queryuser=mysqli_query($conn,$selectuser);
  $selectcorp="SELECT * FROM `cibil_system_corporate`";
  $querycorp=mysqli_query($conn,$selectcorp);
?>

  <!--==========================
    Intro Section
  ============================-->
  <section id="intro" class="clearfix">
    <div class="container-fluid h-100">
        <div class="row justify-content-center align-self-center">
          <div class="col-lg-12 intro-slider">
            <div class="owl-carousel owl-theme testimonials-carousel wow fadeInUp">
              <div class="testimonial-item">
                <div class="container h-100">
                  <div class="row justify-content-center align-self-center">
                    <div class="col-md-6 intro-info order-md-first order-last">
                      <h2>Now Easily Check <br> Your <span>Cibil Score!</span></h2>
                      <div>
                        <a href="assets/login.php" class="btn-get-started scrollto bannerbtn" id="indexchecknow">Check Now</a>
                      </div>
                    </div>
                    <div class="col-md-6 intro-img order-md-last order-first">
                      <img src="img/card1slider.png" alt="" class="img-fluid">
                    </div>
                  </div>
                </div>
              </div>
              <div class="testimonial-item">
                <div class="container h-100">
                  <div class="row justify-content-center align-self-center">
                    <div class="col-md-6 intro-info order-md-first order-last">
                      <h2>Choose a platform<br>for Your <span>Card Details!</span></h2>
                      <div>
                        <a href="assets/user/register.php" class="btn-get-started scrollto bannerbtn" id="indexregisternow">Register Now</a>
                      </div>
                    </div>
                    <div class="col-md-6 intro-img order-md-last order-first">
                      <img src="img/intro-img.svg" alt="" class="img-fluid">
                    </div>
                  </div>
                </div>
              </div>
              <div class="testimonial-item">
                <div class="container h-100">
                  <div class="row justify-content-center align-self-center">
                    <div class="col-md-6 intro-info order-md-first order-last">
                      <h2><span>Corporate Login</span> for User Details</h2>
                      <div>
                        <a href="assets/login.php?corp=1" class="btn-get-started scrollto bannerbtn" id="indexcorplog">Corporate Login</a>
                      </div>
                    </div>
                    <div class="col-md-6 intro-img order-md-last order-first">
                      <img src="img/card3slider.png" alt="" class="img-fluid">
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
  </section>

  <!-- #intro -->

  <main id="main">

    <!--==========================
      About Us Section
    ============================-->
    <section id="about">

      <div class="container">
        <div class="row">

          <div class="col-lg-5 col-md-6">
            <div class="about-img">
              <img src="img/about-imgg.png" alt="">
            </div>
          </div>

          <div class="col-lg-7 col-md-6">
            <div class="about-content p-4">
              <h2>About Us</h2>
              <h3>We are India’s leading credit information company and maintains one of the largest collections of consumer information globally.</h3>
              <h5>Our Values : </h5>
              <ul>
                <li><i class="ion-android-checkmark-circle"></i> <strong style="color:#696592;">INTEGRITY : </strong>We act with honesty, trust and respect in all of our interactions and in everything we do. Our commitment to security and accuracy moves businesses forward.</li>
                <li><i class="ion-android-checkmark-circle"></i> <strong style="color:#696592;">CUSTOMERS : </strong>We earn trust and build lasting relationships by delivering what we promise.</li>
                <li><i class="ion-android-checkmark-circle"></i> <strong style="color:#696592;">INNOVATION : </strong>We aspire to deliver tomorrow’s solutions today.</li>
              </ul>
            </div>
          </div>
        </div>
      </div>

    </section><!-- #about -->


    <!--==========================
      Services Section
    ============================-->
    <section id="services" class="section-bg">
      <div class="container">

        <header class="section-header">
          <h3>Services</h3>
          <p>We provide leading edge services for credit details and updation for users as well as banks.</p>
        </header>

        <div class="row">

          <div class="col-md-6 col-lg-4 wow bounceInUp" data-wow-duration="1.4s">
            <div class="box">
              <div class="icon" style="background: #fceef3;"><i class="ion-person" style="color: #ff689b;"></i></div>
              <h4 class="title"><a href="">Cibil Score</a></h4>
              <p class="description">User can login to check their cibil score and can even update scam reports if they find any problem in it.</p>
            </div>
          </div>
          <div class="col-md-6 col-lg-4 wow bounceInUp" data-wow-duration="1.4s">
            <div class="box">
              <div class="icon" style="background: #fff0da;"><i class="ion-briefcase" style="color: #e98e06;"></i></div>
              <h4 class="title"><a href="">Corporate Login</a></h4>
              <p class="description">Corporate login for banks to check user's cibil score beforing providing loans, credit cards, etc.</p>
            </div>
          </div>

          <div class="col-md-6 col-lg-4 wow bounceInUp" data-wow-delay="0.1s" data-wow-duration="1.4s">
            <div class="box">
              <div class="icon" style="background: #e6fdfc;"><i class="ion-monitor" style="color: #3fcdc7;"></i></div>
              <h4 class="title"><a href="">Simple Interface</a></h4>
              <p class="description">User friendly and attractive interface for the users to browse. High level security to the user and corporate data.</p>
            </div>
          </div>

        </div>

      </div>
    </section><!-- #services -->

    <!--==========================
      Why Us Section
    ============================-->
    <section id="why-us" class="wow fadeIn">
      <div class="container-fluid">
        
        <header class="section-header">
          <h3>Why choose us?</h3>
          <p>We provide leading edge services for credit details and updation for users as well as banks, with simple interface and high security.</p>
        </header>

      </div>

      <div class="container">
        <div class="row counters">

          <div class="col-lg-4 col-4 text-center">
            <span data-toggle="counter-up"><?php echo mysqli_num_rows($querycorp); ?></span>
            <p>Clients</p>
          </div>

          <div class="col-lg-4 col-4 text-center">
            <span data-toggle="counter-up"><?php echo mysqli_num_rows($queryuser); ?></span>
            <p>Users</p>
          </div>

          <div class="col-lg-4 col-4 text-center">
            <span data-toggle="counter-up">60</span>
            <p>Hours Of Support</p>
          </div>
  
        </div>

      </div>
    </section>

    <!--==========================
      Call To Action Section
    ============================-->
    <section id="call-to-action" class="wow fadeInUp">
      <div class="container">
        <div class="row">
          <div class="col-lg-9 text-center text-lg-left">
            <h3 class="cta-title">Cibil Score</h3>
            <p class="cta-text"> Banks check your Cibil Score before approving your loan. Get your free CIBIL Score and apply for a customized loan.</p>
          </div>
          <div class="col-lg-3 cta-btn-container text-center">
            <a class="cta-btn align-middle" href="assets/login.php">Get Yours Now</a>
          </div>
        </div>

      </div>
    </section><!-- #call-to-action -->


    <!--==========================
      Clients Section
    ============================-->
    <section id="clients" class="wow fadeInUp">
      <div class="container">

        <header class="section-header mb-5">
          <h3>Our Clients</h3>
        </header>

        <div class="owl-carousel clients-carousel">
          <img src="img/clients/bank3.png" alt="">
          <img src="img/clients/bank2.png" alt="">
          <img src="img/clients/bank1.png" alt="">
          <img src="img/clients/bank4.png" alt="">
          <img src="img/clients/bank5.png" alt="">
          <img src="img/clients/bank6.png" alt="">
          <img src="img/clients/bank7.png" alt="">
          <img src="img/clients/bank8.png" alt="">
        </div>

      </div>
    </section><!-- #clients -->


    <!--==========================
      Features Section
    ============================-->
    <section id="features" class="features-bg">
      <div class="container">

        <header class="section-header feature-header">
          <h3>Our Features</h3>
        </header>

        <div class="row feature-item">
          <div class="col-lg-6 wow fadeInUp">
            <img src="img/features-1.svg" class="img-fluid" alt="">
          </div>
          <div class="col-lg-6 wow fadeInUp pt-5 pt-lg-0">
            <h4>We never share user or corporate details.</h4>
            <p>
              By collecting, analyzing, and delivering information on the credit histories of millions of borrowers, we empower our members to plan their strategies with greater prudence. We understand our customers’ evolving needs and create solutions that help them innovate and grow, simultaneously creating our own opportunities to reinvest and thrive.
            </p>
            <p>
              Our initiatives have helped drive growth in lending over the last decade. We will continue to invest in content, insights, products and solutions across all sectors. We are also committed to being a partner in the national effort to improve financial literacy, inclusion and protection.
            </p>
          </div>
        </div>

      </div>
    </section><!-- #about -->


    <!--==========================
      Frequently Asked Questions Section
    ============================-->
    <section id="faq">
      <div class="container">
        <header class="section-header mb-5">
          <h3>Frequently Asked Questions</h3>
        </header>

        <ul id="faq-list" class="wow fadeInUp">
          <li>
            <a data-toggle="collapse" class="collapsed" href="#faq1">How I do Register? <i class="ion-android-remove"></i></a>
            <div id="faq1" class="collapse" data-parent="#faq-list">
              <p>
                You can find the link to register on the navigation bar or in the footer.
              </p>
            </div>
          </li>

          <li>
            <a data-toggle="collapse" href="#faq2" class="collapsed">How do I update my scam report? <i class="ion-android-remove"></i></a>
            <div id="faq2" class="collapse" data-parent="#faq-list">
              <p>
                You need to login using your username and password first. Then go your cibil details, there you will find an option for updating your scam report.
              </p>
            </div>
          </li>

          <li>
            <a data-toggle="collapse" href="#faq3" class="collapsed">Why is my cibil report not present? <i class="ion-android-remove"></i></a>
            <div id="faq3" class="collapse" data-parent="#faq-list">
              <p>
                This may happen if you have not completed 6 months from the issue of your credit card.
              </p>
            </div>
          </li>

          <li>
            <a data-toggle="collapse" href="#faq4" class="collapsed">Can Corporate Bank account add user details? <i class="ion-android-remove"></i></a>
            <div id="faq4" class="collapse" data-parent="#faq-list">
              <p>
                Yes you can. You have to login using your corporate account credentials, and add user details.
              </p>
            </div>
          </li>

        </ul>

      </div>
    </section><!-- #faq -->

  </main>

<?php
  require_once('footer.php');

  if(isset($_SESSION['username']) && $_SESSION['username']!='' || isset($_SESSION['corpname']) && $_SESSION['corpname']!=''){
    echo "<script>
      $('.bannerbtn').hide();
    </script>";
  }
  else{
     echo "<script>
      $('.bannerbtn').show();
    </script>";
  }
?>
