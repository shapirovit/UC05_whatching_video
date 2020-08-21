UC05_whatching_video()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_reg_save_param_ex(
	    "ParamName=token", 
	    "LB/IC=Set-Cookie: XSRF-TOKEN=",
	    "RB/IC=;",
		LAST
	);

	web_url("loadtest.uxcrowd.ru", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/api/account", ENDITEM,
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("ru.json", 
		"URL=https://loadtest.uxcrowd.ru/assets/lang/ru.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token}");

	web_url("headerGreenWhite.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_cookie("intercom-session-fkbc3no8=WGZ6ckxVZTFCWFI4NlNOT2N5a1lSdE04ZjhxWTUzQ1Bjd29CWElLUG1aSldKNzZ0bFdVRXo5R0RIMFhEK2hDbS0tSVZEQlRyUnZManRwdFVtVnpUcmVrUT09--e1ebf692ad29e915618910404b5a1b40b9a8ea97; DOMAIN=loadtest.uxcrowd.ru");

	web_url("ux-logo-new-white.svg", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://loadtest.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
//		"Url=/assets/fonts/Futura/FuturaPT-Medium.woff", ENDITEM, 
//		"Url=/assets/fonts/Futura/FuturaPT-Bold.woff", ENDITEM, 
//		"Url=/assets/fonts/Futura/FuturaPT-Light.woff", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("ping", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=d8529e7c6f0252beba305cd97a405034341ff957&s=4380fbd0-0e55-4c2b-9557-dea3862dc749&i=&r=&platform=web&Idempotency-Key=a4d410e3ec17e4e7&user_data=%7B%7D&internal=%7B%7D&page_title=%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&"
		"user_active_company_id=undefined&source=apiBoot&sampling=false&h=false&referer=https%3A%2F%2Floadtest.uxcrowd.ru%2F", 
		LAST);

	lr_think_time(5);

	lr_start_transaction("UC05_TR01_login");

	web_websocket_connect("ID=0", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-eG6Rfvv54dv7ATVaQ7Dqu705QbkNMCNH-Vo_yrFHmjB8iGg__qVolbhoZ1lMF2sGYjx4fEX3Bslh3FEpjB1ESsoveApjxBaDktIX?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
		"Origin=https://loadtest.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_add_cookie("intercom-id-fkbc3no8=907435d1-00ca-4b52-bb8a-10debf99c55b; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("intercom-session-fkbc3no8=; DOMAIN=loadtest.uxcrowd.ru");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token}");

	web_url("modal-login.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");
	
	web_reg_save_param_regexp (
	    "ParamName=token2",
	    "RegExp=Set-Cookie: XSRF-TOKEN=(.*?);",
	    "Ordinal=2",
		LAST
	);

	web_submit_data("authentication", 
		"Action=https://loadtest.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={pass}", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_header("X-XSRF-TOKEN", 
		"{token2}");

	web_url("account", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("list-orders", 
		"URL=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
//		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
//		"Url=../assets/gulp/sup_css.css", ENDITEM, 
//		"Url=../assets/css/landing/webflow.css", ENDITEM, 
//		"Url=../assets/lang/ru.json", ENDITEM, 
//		"Url=https://ulclick.ru/b-count.js", ENDITEM, 
//		"Url=../controller/controller_customer/home.controller.js?bust=1597990353295", ENDITEM, 
//		"Url=../controller/controller_customer/header.controller.js?bust=1597990353295", ENDITEM, 
//		"Url=../app.js?bust=1597990353295", ENDITEM, 
//		"Url=../assets/js/customer_js/react/new_video/2.a431f707.chunk.js?_=1597990352894", ENDITEM, 
//		"Url=../assets/js/customer_js/react/new_video/main.5e193360.chunk.js?_=1597990352895", ENDITEM, 
//		"Url=../assets/js/customer_js/react/new_video/runtime-main.1a5f5893.js?_=1597990352896", ENDITEM, 
//		"Url=../assets/images/test-stand.png", ENDITEM, 
//		"Url=../assets/svg/tests/handHello.svg", ENDITEM, 
//		"Url=../assets/svg/Search.svg", ENDITEM, 
//		"Url=../assets/svg/tests/desktop_windows.svg", ENDITEM, 
//		"Url=../assets/svg/tests/copy.svg", ENDITEM, 
//		"Url=../assets/svg/tests/report.svg", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("metrics", 
		"URL=https://api-iam.intercom.io/messenger/web/metrics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=d8529e7c6f0252beba305cd97a405034341ff957&s=4380fbd0-0e55-4c2b-9557-dea3862dc749&i=&r=&platform=web&Idempotency-Key=d6a88f02e3ebc838&user_data=%7B%22email%22%3A%22user_client_1%401secmail.com%22%2C%22user_id%22%3A493310067%2C%22anonymous_id%22%3A%22907435d1-00ca-4b52-bb8a-10debf99c55b%22%7D&internal=&page_title="
		"%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&user_active_company_id=-1&metrics="
		"%5B%7B%22id%22%3A%226e733367-4ee5-4fde-9bfa-2536bc15bfd4%22%2C%22name%22%3A%22m4_metric%22%2C%22created_at%22%3A1597990343%2C%22metadata%22%3A%7B%22user_id%22%3A%225f3f65c05d47c6c87beffd33%22%2C%22action%22%3A%22received%22%2C%22object%22%3A%22message%22%2C%22place%22%3A%22messenger%22%2C%22context%22%3A%22from_launcher_discovery_mode%22%2C%22version%22%3A%22d8529e7c6f0252beba305cd97a405034341ff957%22%7D%7D%5D&logs=%5B%5D&op_metrics="
		"%5B%7B%22name%22%3A%22load_app_bundle_duration%22%2C%22type%22%3A%22timing%22%2C%22value%22%3A302%7D%5D&hc_metrics=%5B%5D&h=false&referer=https%3A%2F%2Floadtest.uxcrowd.ru%2F", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("ping_2", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=d8529e7c6f0252beba305cd97a405034341ff957&s=4380fbd0-0e55-4c2b-9557-dea3862dc749&i=&r=&platform=web&Idempotency-Key=1b682c5c152347db&user_data=%7B%22email%22%3A%22user_client_1%401secmail.com%22%2C%22user_id%22%3A493310067%2C%22anonymous_id%22%3A%22907435d1-00ca-4b52-bb8a-10debf99c55b%22%7D&internal=%7B%7D&page_title="
		"%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&user_active_company_id=-1&source=apiUpdate&sampling=false&h=false&referer=https%3A%2F%2Floadtest.uxcrowd.ru%2F", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token2}");

	web_url("account_2", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new.video.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/new.video.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_submit_data("ping_3", 
		"Action=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=d8529e7c6f0252beba305cd97a405034341ff957", ENDITEM, 
		"Name=s", "Value=946c4690-710f-46bc-aaee-1dca632d58d4", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=https://loadtest.uxcrowd.ru/", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=425fd5a5af8fa19e", ENDITEM, 
		"Name=user_data", "Value={\"email\":\"user_client_1@1secmail.com\",\"user_id\":493310067,\"anonymous_id\":\"907435d1-00ca-4b52-bb8a-10debf99c55b\"}", ENDITEM, 
		"Name=internal", "Value={}", ENDITEM, 
		"Name=page_title", "Value=", ENDITEM, 
		"Name=user_active_company_id", "Value=undefined", ENDITEM, 
		"Name=source", "Value=apiBoot", ENDITEM, 
		"Name=sampling", "Value=false", ENDITEM, 
		"Name=h", "Value=false", ENDITEM, 
		"Name=referer", "Value=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token2}");

	web_url("user", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/css/svg/logo-new.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/plus-orange.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/logout.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://loadtest.uxcrowd.ru");
	
//	
//	
//	web_reg_save_param_regexp (
//	    "ParamName=orderContent",
//	    "RegExp=content(.+)customer",
//	    "Ordinal=ALL",
//		LAST
//	);
	
	web_reg_save_param_regexp (
	    "ParamName=orderIDArray",
	    "RegExp=id\":(\\d{6,10}),\"testTitle",
	    "Ordinal=ALL",
		LAST
	);
	
	web_reg_save_param_regexp (
	    "ParamName=orderCompletedTestCountArray",
	    "RegExp=completedTestCount\":(.*?),",
	    "Ordinal=ALL",
		LAST
	);
	
	
//	

	web_custom_request("orders", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/orders", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"direction\":\"DESC\",\"filter\":[\"ACTIVE\",\"COMPLETED\",\"DRAFT\",\"WAIT_CONFIRMATION\"],\"page\":0,\"size\":10,\"sort\":[\"startDate\"]}", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("ping_4", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=d8529e7c6f0252beba305cd97a405034341ff957&s=946c4690-710f-46bc-aaee-1dca632d58d4&i=&r=https%3A%2F%2Floadtest.uxcrowd.ru%2F&platform=web&Idempotency-Key=a1fb40987c3f6ce4&user_data=%7B%22email%22%3A%22user_client_1%401secmail.com%22%2C%22user_id%22%3A493310067%2C%22anonymous_id%22%3A%22907435d1-00ca-4b52-bb8a-10debf99c55b%22%7D&internal=%7B%7D&page_title=%D0%92%D1%81%D0%B5%20%D1%82%D0%B5%D1%81%D1%82%D1%8B&user_active_company_id=-1&source=apiUpdate&sampling=false&h=false&"
		"referer=https%3A%2F%2Floadtest.uxcrowd.ru%2Fapp-customer-home%2Flist-orders&anonymous_session=WGZ6ckxVZTFCWFI4NlNOT2N5a1lSdE04ZjhxWTUzQ1Bjd29CWElLUG1aSldKNzZ0bFdVRXo5R0RIMFhEK2hDbS0tSVZEQlRyUnZManRwdFVtVnpUcmVrUT09--e1ebf692ad29e915618910404b5a1b40b9a8ea97", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_cookie("intercom-session-fkbc3no8=ZlowK3JBeGdTeGlzSVlJbFVmVXdMQTJkb1hhOUZ2R1ZVNjhsME1BZXBYa3cwdFlsek1vbndMTk0xYWlET05HNi0taXRWZThqWTcxWDJQaU1KU1lWNWhIdz09--a1e605d765d007e7d4806f65b431b2e33613163e; DOMAIN=loadtest.uxcrowd.ru");

	web_websocket_connect("ID=1", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-QxDBl9HciLJFuYQLeze1XANAMOjqn7AFN6-tdo53PjvcK1c1gUHX2sGk0809yIs1Er5C9U9HmaOWuveLbUX7loPKeDigKGz7sQvh?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
		"Origin=https://loadtest.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive1*/

	/*Connection ID 1 received buffer WebSocketReceive2*/

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/list-orders\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	lr_end_transaction("UC05_TR01_login",LR_AUTO);

	lr_start_transaction("UC05_TR02_test_page_open");
	
//	
//	
	lr_save_string("1", "OrderID");
    if (atoi(lr_eval_string("{orderCompletedTestCountArray_count}")) != 0) {
		for (i = 1;i <= atoi(lr_eval_string("{orderCompletedTestCountArray_count}")); i++) {
			if (atoi(lr_paramarr_idx("orderCompletedTestCountArray", i)) != 0) {
				lr_save_string(lr_paramarr_idx("orderIDArray", i), "OrderID");
				break;
			}
    	}
		
		if (atoi(lr_eval_string("{OrderID}")) == 1) {
			lr_message("НЕТ пройденных тестов!!! ---------------------------------------------");
			return 0;			
		} else {
			lr_message("Пройденные тесты есть!!! +++++++++++++++++++++++++++++++++++++++++++++");
		}
		
    } else {
		lr_message("НЕТ тестов!!! ---------------------------------------------");
        return 0;
    }


	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token2}");

	web_url("user_2", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/{OrderID}", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	
//	
//	
	web_reg_save_param_regexp (
	    "ParamName=videoID",
	    "RegExp=videoId\":\"(.*?)\"",
	    "Ordinal=1",
		LAST
	);

	web_url("{OrderID}", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/order/{OrderID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/{OrderID}", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_custom_request("ping_5", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=d8529e7c6f0252beba305cd97a405034341ff957&s=946c4690-710f-46bc-aaee-1dca632d58d4&i=&r=https%3A%2F%2Floadtest.uxcrowd.ru%2F&platform=web&Idempotency-Key=26f807f6c402573d&user_data=%7B%22email%22%3A%22user_client_1%401secmail.com%22%2C%22user_id%22%3A493310067%2C%22anonymous_id%22%3A%22907435d1-00ca-4b52-bb8a-10debf99c55b%22%7D&internal=%7B%7D&page_title=%D0%92%D1%81%D0%B5%20%D1%82%D0%B5%D1%81%D1%82%D1%8B&user_active_company_id=-1&source=apiUpdate&sampling=false&h=false&"
		"referer=https%3A%2F%2Floadtest.uxcrowd.ru%2Fapp-customer-home%2Ftests%2F{OrderID}&anonymous_session=ZlowK3JBeGdTeGlzSVlJbFVmVXdMQTJkb1hhOUZ2R1ZVNjhsME1BZXBYa3cwdFlsek1vbndMTk0xYWlET05HNi0taXRWZThqWTcxWDJQaU1KU1lWNWhIdz09--a1e605d765d007e7d4806f65b431b2e33613163e", 
//		EXTRARES, 
//		"Url=https://loadtest.uxcrowd.ru/assets/svg/tests/play.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/{OrderID}", ENDITEM, 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=MXNJWWljQUlINDlma0RBSXRHb3pJTEQvT0RvbCtpbEVleFp3ekxacWRZczhBUDNLOFM1Z0Z1VkwwZCtPZk9iZS0tOHkveUdFRnBWUDBsYVNvQ3poeFg3QT09--3c9323d8ea25390deed3f53ffa564835fccbec35; DOMAIN=loadtest.uxcrowd.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token2}");

	web_url("get-tester_task_link", 
		"URL=https://loadtest.uxcrowd.ru/api/server/get-tester_task_link?customerOrderId={OrderID}&targetType=SITE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/{OrderID}", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/js/customer_js/react/new_video/2.a431f707.chunk.js?_=1597990352900", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
//		"Url=/assets/js/customer_js/react/new_video/main.5e193360.chunk.js?_=1597990352901", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
//		"Url=/assets/js/customer_js/react/new_video/runtime-main.1a5f5893.js?_=1597990352902", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
//		"Url=/assets/svg/video-player/bigPlay.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597990401578\",\"eventData\":{\"sendTime\":1597990401578,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-QxDBl9HciLJFuYQLeze1XANAMOjqn7AFN6-tdo53PjvcK1c1gUHX2sGk0809yIs1Er5C9U9HmaOWuveLbUX7loPKeDigKGz7sQvh\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive3*/

	lr_end_transaction("UC05_TR02_test_page_open",LR_AUTO);

	/*Connection ID 1 received buffer WebSocketReceive4*/

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/tests/{OrderID}\"}}", 
		"IsBinary=0", 
		LAST);

	lr_start_transaction("UC05_TR03_test_video_open");

	web_url("user_3", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/svg/video-player/download.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
		LAST);

	web_url("relatedVideoIds", 
		"URL=https://loadtest.uxcrowd.ru/api/video/relatedVideoIds?videoId={videoID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

//	
//			
	web_reg_save_param_ex(
		"ParamName=fileName", 
		"LB/IC=fileName\":\"",
		"RB/IC=.webm",
		LAST
	);
	
	
	web_url("{videoID}", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/{videoID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_submit_data("ping_6", 
		"Action=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=d8529e7c6f0252beba305cd97a405034341ff957", ENDITEM, 
		"Name=s", "Value=946c4690-710f-46bc-aaee-1dca632d58d4", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=https://loadtest.uxcrowd.ru/", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=b7fb9eaa5fa1bc58", ENDITEM, 
		"Name=user_data", "Value={\"email\":\"user_client_1@1secmail.com\",\"user_id\":493310067,\"anonymous_id\":\"907435d1-00ca-4b52-bb8a-10debf99c55b\"}", ENDITEM, 
		"Name=internal", "Value={}", ENDITEM, 
		"Name=page_title", "Value=Р’РёРґРµРѕ", ENDITEM, 
		"Name=user_active_company_id", "Value=-1", ENDITEM, 
		"Name=source", "Value=apiUpdate", ENDITEM, 
		"Name=sampling", "Value=false", ENDITEM, 
		"Name=h", "Value=false", ENDITEM, 
		"Name=referer", "Value=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
		"Name=anonymous_session", "Value=MXNJWWljQUlINDlma0RBSXRHb3pJTEQvT0RvbCtpbEVleFp3ekxacWRZczhBUDNLOFM1Z0Z1VkwwZCtPZk9iZS0tOHkveUdFRnBWUDBsYVNvQ3poeFg3QT09--3c9323d8ea25390deed3f53ffa564835fccbec35", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token2}");

	web_url("tags", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/{videoID}/tags", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/svg/video-player/AddComment.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
//		"Url=/assets/svg/video-player/TranscriptExample.png", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
		LAST);

	web_url("notes", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/{videoID}/notes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/svg/down-chevron.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
//		"Url=/videos/{fileName}.mp4", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
//		"Url=/assets/css/svg/logout-hover.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=bHgzenVxODh2clRpZlViYVNtYm1YQ1hvMVVmZ25DaG9WTUtWZ0ZhbGExaCt2WU9VczZqd1Z4b0JMQllNUHZUbS0tZ3VJRkt6MDRKTkZtRExSUk5ZMUNQdz09--846a44dd215aeaba5e5e81ea1083297dcff51236; DOMAIN=loadtest.uxcrowd.ru");

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Dest", 
		"video");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_stream_open("ID=1", "URL=https://loadtest.uxcrowd.ru/videos/{fileName}.mp4", "Protocol=HTTP", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/
	
	lr_end_transaction("UC05_TR03_test_video_open",LR_AUTO);
	
	lr_start_transaction("UC05_TR04_test_video_play");
	
	web_stream_play("ID=1", "PlayingDuration=10", LAST);
	
	lr_end_transaction("UC05_TR04_test_video_play",LR_AUTO);	
	
	lr_start_transaction("UC05_TR05_test_video_stop");
	
	web_stream_stop("ID=1",LAST);

	lr_end_transaction("UC05_TR05_test_video_stop",LR_AUTO);

	web_stream_close("ID=1", LAST);

//	lr_end_transaction("UC05_TR03_test_video_open",LR_AUTO);

//	web_websocket_send("ID=1", 
//		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597990461185\",\"eventData\":{\"sendTime\":1597990461185,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-QxDBl9HciLJFuYQLeze1XANAMOjqn7AFN6-tdo53PjvcK1c1gUHX2sGk0809yIs1Er5C9U9HmaOWuveLbUX7loPKeDigKGz7sQvh\"}}", 
//		"IsBinary=0", 
//		LAST);
//
//	/*Connection ID 1 received buffer WebSocketReceive5*/
//
//	lr_start_transaction("UC05_TR04_test_video_play");
//
//	/*Connection ID 1 received buffer WebSocketReceive6*/
//
//	web_websocket_send("ID=1", 
//		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}\"}}", 
//		"IsBinary=0", 
//		LAST);
//
//	lr_end_transaction("UC05_TR04_test_video_play",LR_AUTO);
//
//	lr_start_transaction("UC05_TR05_test_video_stop");
//
//	lr_end_transaction("UC05_TR05_test_video_stop",LR_AUTO);
//
//	web_websocket_send("ID=1", 
//		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597990521189\",\"eventData\":{\"sendTime\":1597990521189,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-QxDBl9HciLJFuYQLeze1XANAMOjqn7AFN6-tdo53PjvcK1c1gUHX2sGk0809yIs1Er5C9U9HmaOWuveLbUX7loPKeDigKGz7sQvh\"}}", 
//		"IsBinary=0", 
//		LAST);

	/*Connection ID 1 received buffer WebSocketReceive7*/

//	lr_start_transaction("UC05_TR06_logout");
//
//	/*Connection ID 1 received buffer WebSocketReceive8*/
//
//	web_websocket_send("ID=1", 
//		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}\"}}", 
//		"IsBinary=0", 
//		LAST);
//
//	web_add_cookie("CSRF-TOKEN={token}; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("XSRF-TOKEN={token2}; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("remember-me=aEo2c3BRNnk2dXVaTUgxOFdrZ242dyUzRCUzRDpoYWJzeUg3OHJPWmxiM2NwJTJCVU5qbWclM0QlM0Q; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("JSESSIONID=881E89049BDDBC111F71B34942C2E1C5; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_header("X-XSRF-TOKEN", 
//		"{token2}");
//
//	web_add_header("Origin", 
//		"https://loadtest.uxcrowd.ru");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_custom_request("logout", 
//		"URL=https://loadtest.uxcrowd.ru/api/logout", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
//		"Snapshot=t35.inf", 
//		"Mode=HTML", 
//		"EncType=", 
////		EXTRARES, 
////		"Url=../controller/controller_home/newMain.controller.js?bust=1597990353295", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
////		"Url=../controller/controller_home/login.controller.js?bust=1597990353295", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
//		LAST);
//
//	web_websocket_close("ID=1", 
//		"Code=1000", 
//		LAST);
//
//	web_add_auto_header("X-XSRF-TOKEN", 
//		"9b8fcf67-ab0d-42b1-a3ed-c8922da27365");
//
//	web_url("headerGreenWhite.html_2", 
//		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
//		"Snapshot=t36.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("home.html_3", 
//		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
//		"Snapshot=t37.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("footer.html_2", 
//		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", 
//		"Snapshot=t38.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_revert_auto_header("X-XSRF-TOKEN");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"image");
//
//	web_add_cookie("intercom-id-fkbc3no8=fa025da0-695c-4d31-a7f9-995e33bdb209; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_url("loadtest.uxcrowd.ru_2", 
//		"URL=https://loadtest.uxcrowd.ru/", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://loadtest.uxcrowd.ru/", 
//		"Snapshot=t39.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://loadtest.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
//		"Url=/assets/images/uxcrowd-logo-new.svg", ENDITEM, 
//		"Url=/assets/images/burger-white-mobile.svg", ENDITEM, 
//		"Url=/assets/images/uxcrowd-logo-white-mobile.svg", ENDITEM, 
//		"Url=/assets/images/avatar-white-mobile.svg", ENDITEM, 
//		"Url=/assets/images/youtube-colored.svg", ENDITEM, 
//		"Url=/assets/images/facebook-colored.svg", ENDITEM, 
//		"Url=/assets/images/google-play-btn.png", ENDITEM, 
//		"Url=/assets/images/nl-home-work-blot-rect.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-work-arrow.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-girl.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-work-blot-circle.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-helpful-block-1.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-top-blot.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-helpful-block-2.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-helpful-block-3.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-rabota_ru.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-gazprombank.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-5.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-3.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-2.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-4.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-1.svg", ENDITEM, 
//		"Url=/assets/images/egor_golubev.png", ENDITEM, 
//		"Url=/assets/images/nl-home-center-blot.png", ENDITEM, 
//		"Url=/assets/images/ildar_mullahmetov.png", ENDITEM, 
//		"Url=/assets/images/svetlana_gorshkova.jpg", ENDITEM, 
//		"Url=/assets//images/question.png", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-blot-mobile.svg", ENDITEM, 
//		"Url=/assets/images/Rectangle%205.2.png", ENDITEM, 
//		"Url=/assets/images/nl-home-blot-bottom-mobile.svg", ENDITEM, 
//		"Url=/assets/images/ux-logo-new-white.svg", ENDITEM, 
//		"Url=/assets/images/facebook.svg", ENDITEM, 
//		"Url=/assets/images/youtube.svg", ENDITEM, 
//		LAST);
//
//	web_add_auto_header("Origin", 
//		"https://loadtest.uxcrowd.ru");
//
//	web_revert_auto_header("Sec-Fetch-Dest");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_revert_auto_header("Sec-Fetch-Mode");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_revert_auto_header("Sec-Fetch-Site");
//
//	web_add_header("Sec-Fetch-Site", 
//		"cross-site");
//
//	web_submit_data("ping_7", 
//		"Action=https://api-iam.intercom.io/messenger/web/ping", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t40.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
//		"Name=v", "Value=3", ENDITEM, 
//		"Name=g", "Value=d8529e7c6f0252beba305cd97a405034341ff957", ENDITEM, 
//		"Name=s", "Value=2b376f33-8110-40b4-aea3-8d76f4831391", ENDITEM, 
//		"Name=i", "Value=", ENDITEM, 
//		"Name=r", "Value=https://loadtest.uxcrowd.ru/", ENDITEM, 
//		"Name=platform", "Value=web", ENDITEM, 
//		"Name=Idempotency-Key", "Value=0eb9dd0fdad06e22", ENDITEM, 
//		"Name=user_data", "Value={}", ENDITEM, 
//		"Name=internal", "Value={}", ENDITEM, 
//		"Name=page_title", "Value=Р’РёРґРµРѕ", ENDITEM, 
//		"Name=user_active_company_id", "Value=undefined", ENDITEM, 
//		"Name=source", "Value=apiBoot", ENDITEM, 
//		"Name=sampling", "Value=false", ENDITEM, 
//		"Name=h", "Value=false", ENDITEM, 
//		"Name=referer", "Value=https://loadtest.uxcrowd.ru/app-customer-home/new-video/{videoID}", ENDITEM, 
//		LAST);
//
//	web_websocket_connect("ID=2", 
//		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-s0fyC6zkLyy2xuj2bw7memyLtNzcKCoIm25f5E634NjlWI1nhtIQlqeXRVaSJO_XsHSKswZSC_dsRCcikdayv69Lpr4gEXR_uZL0?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
//		"Origin=https://loadtest.uxcrowd.ru", 
//		"OnOpenCB=OnOpenCB2", 
//		"OnMessageCB=OnMessageCB2", 
//		"OnErrorCB=OnErrorCB2", 
//		"OnCloseCB=OnCloseCB2", 
//		LAST);
//
//	/*Connection ID 2 received buffer WebSocketReceive9*/
//
//	web_websocket_send("ID=2", 
//		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/\"}}", 
//		"IsBinary=0", 
//		LAST);
//
//	web_websocket_send("ID=2", 
//		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
//		"IsBinary=0", 
//		LAST);
//
//	lr_end_transaction("UC05_TR06_logout",LR_AUTO);

	return 0;
}