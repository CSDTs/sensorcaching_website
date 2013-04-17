<?php

/**
 * @file
 * Custom theme implementation to present user profile with sensor maps.
 * Author: Daniel Zhao
 * Last Modified: 2013-4-15
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *	
 */
?>
<div class="profile"<?php print $attributes; ?>>
	<?php   $str_website = render($user_profile['field_website']); 
		$field_website = strip_tags($str_website);
		// User Name 
		$str_name = render($user_profile['field_name']); 
		$field_name = strip_tags($str_name);
		// User Status 
		$str_status = render($user_profile['field_status']); 
		$field_status = strip_tags($str_status); 
		// User About
		$str_about = render($user_profile['field_about']); 
		$field_about = strip_tags($str_about); 
		// User City
		$str_city = render($user_profile['field_city']); 
		$field_city = strip_tags($str_city); ?>

	<div class="field field-type-text-textfield field-profile">
  		<div class="field-items">
			<div class="field-item avatar"><?php print render( $user_profile['user_picture'] ); ?></div>
      			<h1 style="display:inline;"><?php print $field_name; ?></h1>
      			
			<!--div class="field-item profile-city"><?php print $field_city; ?></div-->
			
			<div class="field-item profile-meta"><p><span class="status"><?php print $field_status; ?></span> &#183; <span><a href="<?php print 'http://'. $field_website; ?>" target="_blank"><?php print $field_website; ?></a></span></p></div><!-- end of div profile-meta -->
      			<p class="profile-about"><?php print $field_about; ?></p>
  		</div>
	</div>
</div><!-- end of div .profile -->
<div id="two-column">
	<div id="activity-stream" class="profile-content">
		<strong><?php print $field_name.'&#39;s Activity'; ?></strong>
		<div class="field-item profile-summary"><?php print render( $user_profile['summary'] ); ?></div>
	</div><!-- End of div#activity-stream -->
	<div id="sensors-own" class="profile-content">
		<strong><?php print $field_name.'&#39;s Sensors'; ?></strong>
		<div class="field-item profile-sensors"></div>
	</div><!-- End of div#sensors-own -->
</div><!-- end of div #two-column -->	

<style>
.avatar {
	float: left; }
.status {
	font-weight: bold; }
.profile-meta {
	padding-top: 15px; }
.profile {
	min-height: 169px; }
#two-column {
	margin-top: 30px;
	border-top: 1px solid lightgray; }
.profile-content {
	width: 30%;
	float: left;	
	padding-top: 50px;  }
#sensors-own {
	padding-left: 40px;
	border-left: 1px solid lightgray; }
</style>
