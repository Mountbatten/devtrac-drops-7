(function($) {
	Drupal.behaviors.menuresize = {
		attach : function(context, settings) {
			
			overviewLink();
			usernameDiv();



			
			function overviewLink() {

				//Select the closest <article> tag from <a> tag and asign link
				$('.view-dvtrc-user.view-id-dvtrc_user td.views-field-title > a:not(.is-processed)').each(
						function() {
							var link = $(this).attr('href');
							$(this).closest('table')
									.wrap('<a class="overview-link" href="' + link + '"><div class="overview-link-wrapper"></div></a>');
						}).addClass('is-processed');
			}

			function usernameDiv() {

				if ($('.ds-1col.user-profile.view-mode-full').children('.username-title-wrapper').length < 1) {
					$('.ds-1col.user-profile.view-mode-full').prepend('<div class="username-title-wrapper"></div>');
					$('.ds-1col.user-profile.view-mode-full .field-name-field-user-firstname').appendTo('.username-title-wrapper');
					$('.ds-1col.user-profile.view-mode-full .field-name-field-user-surname').appendTo('.username-title-wrapper');
					$('.ds-1col.user-profile.view-mode-full .field-name-field-user-title ').appendTo('.username-title-wrapper');
				};




			}

		}

	};

})(jQuery);
