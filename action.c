Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("EXPID=7c001c0c-e8ee-4fb5-bd34-d9f039843a01; DOMAIN=support.microsoft.com");

	web_add_cookie("MSFPC=GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165; DOMAIN=support.microsoft.com");

	web_add_cookie("ai_session=pMX+cQVNQGuDdC0dNaBlNp|1651853861584|1651854022480; DOMAIN=support.microsoft.com");

	web_add_cookie("MicrosoftApplicationsTelemetryDeviceId=4a4ab793-d2bf-4d47-9502-8b10e229d375; DOMAIN=support.microsoft.com");

	web_add_cookie("UCSMUID=1B4F6F10E8CF6DE93F087E82ECCF6BE7; DOMAIN=support.microsoft.com");

	web_add_cookie(".AspNetCore.AuthProvider=True; DOMAIN=support.microsoft.com");

	web_add_cookie("MS0=1084243eb7354f618e147c20afcbf09e; DOMAIN=support.microsoft.com");

	web_add_cookie("ak_bmsc=78EF817703F68557FB53AA9D4B9BA580~000000000000000000000000000000~YAAQENvAF2z25Y2AAQAAYwMpmg/i1qCdyKXlYzpDZftM1GvvIw4JiLZYoXtlWUrTrY7wsg1daNQlO+Ie6AHrCt65zvmgUD1lnPCAr7yE/VlQ+OoXU3vh/iozN0s16hn6v5FcBfPUysgzX8QEJhSj5HqdciWn2jVSW3dbLSTsEIvPFk7tWfIUVvOOR3chJdhkXf9kr2CnovgbxnOlpiJODsdgZKheggM5lX7gfX89gFUAkkgsrDGqOYmgWV629pCH1CeeewqnkQSj2x2J10RApsYE8w9yv5bf97NF0EaaAQec+Byz2aDpnisFUfuuwS4TEFrTWn8WpJMxCs5NVQX5NTmqVIr7G+7mA0Sp5KMkqZX44+1S+rOLcb/OAwMOnA==; DOMAIN=support.microsoft.com");

	web_add_cookie("MSCC=NR; DOMAIN=support.microsoft.com");

	web_add_cookie("MC1=GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165; DOMAIN=support.microsoft.com");

	web_add_cookie("MUID=1B4F6F10E8CF6DE93F087E82ECCF6BE7; DOMAIN=support.microsoft.com");

	web_reg_find("Text=This website doesn&#x27;t work in Internet Explorer", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html, application/xhtml+xml, image/jxr, */*");

	web_add_cookie("akacd_OneRF=1658783628~rv=95~id=ea9cb47b3799e0277664af5b6bd970f1; DOMAIN=www.microsoft.com");

	web_add_cookie("MS0=1084243eb7354f618e147c20afcbf09e; DOMAIN=www.microsoft.com");

	web_add_cookie("ak_bmsc=78EF817703F68557FB53AA9D4B9BA580~000000000000000000000000000000~YAAQENvAF2z25Y2AAQAAYwMpmg/i1qCdyKXlYzpDZftM1GvvIw4JiLZYoXtlWUrTrY7wsg1daNQlO+Ie6AHrCt65zvmgUD1lnPCAr7yE/VlQ+OoXU3vh/iozN0s16hn6v5FcBfPUysgzX8QEJhSj5HqdciWn2jVSW3dbLSTsEIvPFk7tWfIUVvOOR3chJdhkXf9kr2CnovgbxnOlpiJODsdgZKheggM5lX7gfX89gFUAkkgsrDGqOYmgWV629pCH1CeeewqnkQSj2x2J10RApsYE8w9yv5bf97NF0EaaAQec+Byz2aDpnisFUfuuwS4TEFrTWn8WpJMxCs5NVQX5NTmqVIr7G+7mA0Sp5KMkqZX44+1S+rOLcb/OAwMOnA==; DOMAIN=www.microsoft.com");

	web_add_cookie("MSCC=NR; DOMAIN=www.microsoft.com");

	web_add_cookie("MC1=GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165; DOMAIN=www.microsoft.com");

	web_add_cookie("MUID=1B4F6F10E8CF6DE93F087E82ECCF6BE7; DOMAIN=www.microsoft.com");

	web_add_cookie("MS0=1084243eb7354f618e147c20afcbf09e; DOMAIN=web.vortex.data.microsoft.com");

	web_add_cookie("ak_bmsc=78EF817703F68557FB53AA9D4B9BA580~000000000000000000000000000000~YAAQENvAF2z25Y2AAQAAYwMpmg/i1qCdyKXlYzpDZftM1GvvIw4JiLZYoXtlWUrTrY7wsg1daNQlO+Ie6AHrCt65zvmgUD1lnPCAr7yE/VlQ+OoXU3vh/iozN0s16hn6v5FcBfPUysgzX8QEJhSj5HqdciWn2jVSW3dbLSTsEIvPFk7tWfIUVvOOR3chJdhkXf9kr2CnovgbxnOlpiJODsdgZKheggM5lX7gfX89gFUAkkgsrDGqOYmgWV629pCH1CeeewqnkQSj2x2J10RApsYE8w9yv5bf97NF0EaaAQec+Byz2aDpnisFUfuuwS4TEFrTWn8WpJMxCs5NVQX5NTmqVIr7G+7mA0Sp5KMkqZX44+1S+rOLcb/OAwMOnA==; DOMAIN="
		"web.vortex.data.microsoft.com");

	web_add_cookie("MSCC=NR; DOMAIN=web.vortex.data.microsoft.com");

	web_add_cookie("MC1=GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165; DOMAIN=web.vortex.data.microsoft.com");

	web_add_cookie("MUID=1B4F6F10E8CF6DE93F087E82ECCF6BE7; DOMAIN=web.vortex.data.microsoft.com");

	web_add_cookie("ai_session=pMX+cQVNQGuDdC0dNaBlNp|1651853861584|1651854082118; DOMAIN=support.microsoft.com");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept-Language", 
		"en-US");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; WOW64; Trident/7.0; rv:11.0) like Gecko");

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?linkid=2135547", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://support.microsoft.com/socfonts/OffSMDL2.4.50.woff", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		"Url=https://www.microsoft.com/mwf/_h/v3.54/mwf.app/fonts/mwfmdl2-v3.54.woff", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.js?ver='2.1'&name='Ms.Webi.PageView'&time='2022-05-06T16%3A21%3A22.081Z'&os='Windows'&appId='JS%3Asupport.office.com'&-ver='1.0'&-impressionGuid='0cd7ddcb-fcc0-4970-a8e7-b39eee536a06'&-pageName='this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554'&-uri="
		"'https%3A%2F%2Fsupport.microsoft.com%2Fen-us%2Foffice%2Fthis-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554%3Fui%3Den-us%26rs%3Den-us%26ad%3Dus'&-market='en-US'&-pageType='Article'&-resHeight=1080&-resWidth=1920&-pageTags="
		"'%7B%22metaTags%22%3A%7B%22schemaName%22%3A%22HELP%20ARTICLE%22%2C%22asst%22%3A%228f5fc675-cd47-414c-9535-12821ddfc554%22%2C%22contentlang%22%3A%22en%22%2C%22userFlightingId%22%3A%227c001c0c-e8ee-4fb5-bd34-d9f039843a01%22%2C%22expid%22%3A%22P-E-1013190-3-5%3BP-E-1013187-9-6%3BP-E-1010984-3-6%3BP-E-1012960-C1-5%3BP-E-1009540-C1-11%3BP-E-1005647-4-7%3BP-E-1002779-3-6%3BP-R-1005895-2-11%3BP-R-1000786-2-5%3BP-R-116475-2-8%3BP-R-113175-4-7%3BP-R-113174-1-2%3BP-R-110379-1-7%3BP-R-107838-1-4%3BP-R-106524"
		"-1-3%3BP-R-101783-1-2%3BP-R-97577-1-5%3BP-R-97457-1-10%3BP-R-94390-1-2%3BP-R-94360-2-18%3BP-R-93416-1-3%3BP-R-93413-1-2%3BP-R-90963-2-2%3BP-R-85265-4-8%3BP-R-73296-2-15%22%2C%22origindatacenter%22%3A%22Central%20US%22%2C%22variationid%22%3A%22ECS%22%2C%22prdct%22%3A%22office.com%22%2C%22stv%22%3A%221.0.0-62f87f9ffa29a30037b2a05f13905cf8ce0d48fc%22%2C%22title%22%3A%22This%20website%20doesn't%20work%20in%20Internet%20Explorer%22%2C%22selfHelpExp%22%3A%22railbanner_m365%22%2C%22ms.lang%22%3A%22en%22%"
		"2C%22ms.loc%22%3A%22US%22%2C%22ms.ocpub.assetID%22%3A%228f5fc675-cd47-414c-9535-12821ddfc554%22%7D%7D'&-behavior=0&*baseType='Ms.Content.PageView'&*cookieEnabled=true&*isJs=true&*title='This%20website%20doesn't%20work%20in%20Internet%20Explorer'&*isLoggedIn=false&*serverImpressionGuid='00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00'&*flashInstalled=false&ext-app-env='Production'&ext-javascript-ver='1.1'&ext-javascript-libVer='4.3.5'&ext-javascript-domain='support.microsoft.com'&"
		"ext-javascript-msfpc='GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165'&ext-javascript-userConsent=true&ext-user-localId='t%3A1B4F6F10E8CF6DE93F087E82ECCF6BE7'&$mscomCookies=false", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		"Url=https://support.microsoft.com/css/glyphs/SupMDL2_v4_67.woff", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("Access-Control-Request-Headers", 
		"cache-control, content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_auto_header("Origin", 
		"https://support.microsoft.com");

	web_custom_request("1.0", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.1.6&apikey=83328b3c5ab7488692991e7d63483cff-e640bd11-2392-49b1-b739-ed8e62bcb870-7240&upload-time=1651854083130&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=use-collector-delta&w=0", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://mem.gfx.ms/scripts/me/MeControl/10.22059.5/en-US/meBoot.min.js", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		LAST);

	web_add_cookie("MS0=1084243eb7354f618e147c20afcbf09e; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("ak_bmsc=78EF817703F68557FB53AA9D4B9BA580~000000000000000000000000000000~YAAQENvAF2z25Y2AAQAAYwMpmg/i1qCdyKXlYzpDZftM1GvvIw4JiLZYoXtlWUrTrY7wsg1daNQlO+Ie6AHrCt65zvmgUD1lnPCAr7yE/VlQ+OoXU3vh/iozN0s16hn6v5FcBfPUysgzX8QEJhSj5HqdciWn2jVSW3dbLSTsEIvPFk7tWfIUVvOOR3chJdhkXf9kr2CnovgbxnOlpiJODsdgZKheggM5lX7gfX89gFUAkkgsrDGqOYmgWV629pCH1CeeewqnkQSj2x2J10RApsYE8w9yv5bf97NF0EaaAQec+Byz2aDpnisFUfuuwS4TEFrTWn8WpJMxCs5NVQX5NTmqVIr7G+7mA0Sp5KMkqZX44+1S+rOLcb/OAwMOnA==; DOMAIN="
		"browser.events.data.microsoft.com");

	web_add_cookie("MSCC=NR; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("MC1=GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("MUID=1B4F6F10E8CF6DE93F087E82ECCF6BE7; DOMAIN=browser.events.data.microsoft.com");

	web_add_header("Accept-Language", 
		"en-US");

	web_add_header("cache-control", 
		"no-cache, no-store");

	web_custom_request("1.0_2", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.1.6&apikey=83328b3c5ab7488692991e7d63483cff-e640bd11-2392-49b1-b739-ed8e62bcb870-7240&upload-time=1651854083130&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=use-collector-delta&w=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/x-json-stream", 
		"Body={\"name\":\"Ms.Web.PageView\",\"time\":\"2022-05-06T16:21:22.117Z\",\"ver\":\"4.0\",\"iKey\":\"o:83328b3c5ab7488692991e7d63483cff\",\"ext\":{\"web\":{\"isManual\":false,\"domain\":\"support.microsoft.com\",\"userConsent\":true},\"sdk\":{\"ver\":\"1DS-Web-JS-3.1.6\",\"seq\":1,\"epoch\":\"842691854\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t"
		":1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"behavior\":{\"t\":6}}}},\"data\":{\"baseType\":\"PageviewData\",\"baseData\":{\"ver\":\"1.0\",\"id\":\"8d5b4a14-cbe9-4324-97fc-a353f1a68c95\",\"name\":\"this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554\",\"uri\":\"https://"
		"support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us\",\"properties\":{\"pageTags\":{\"metaTags\":{\"schemaName\":\"HELP ARTICLE\",\"asst\":\"8f5fc675-cd47-414c-9535-12821ddfc554\",\"env\":\"Production\",\"contentlang\":\"en\",\"userFlightingId\":\"7c001c0c-e8ee-4fb5-bd34-d9f039843a01\",\"expid\":\"P-E-1013190-3-5;P-E-1013187-9-6;P-E-1010984-3-6;P-E-1012960-C1-5;P-E-1009540-C1-11;P-E-1005647-4-7;"
		"P-E-1002779-3-6;P-R-1005895-2-11;P-R-1000786-2-5;P-R-116475-2-8;P-R-113175-4-7;P-R-113174-1-2;P-R-110379-1-7;P-R-107838-1-4;P-R-106524-1-3;P-R-101783-1-2;P-R-97577-1-5;P-R-97457-1-10;P-R-94390-1-2;P-R-94360-2-18;P-R-93416-1-3;P-R-93413-1-2;P-R-90963-2-2;P-R-85265-4-8;P-R-73296-2-15\",\"origindatacenter\":\"Central US\",\"variationid\":\"ECS\",\"prdct\":\"office.com\",\"stv\":\"1.0.0-62f87f9ffa29a30037b2a05f13905cf8ce0d48fc\",\"serverImpressionGuid\":\""
		"00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00\",\"title\":\"This website doesn't work in Internet Explorer\",\"selfHelpExp\":\"railbanner_m365\",\"ms.lang\":\"en\",\"ms.loc\":\"US\",\"ms.ocpub.assetID\":\"8f5fc675-cd47-414c-9535-12821ddfc554\"}},\"version\":\"PostChannel=3.1.6;SystemPropertiesCollector=3.1.6;WebAnalyticsPlugin=3.1.6\"},\"pageType\":\"Article\",\"market\":\"en-US\",\"isLoggedIn\":false},\"cookieEnabled\":true,\"cookies\":\"MSFPC=GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH="
		"2c4f&LV=202204&V=4&LU=1651007629165;\",\"behavior\":0}}", 
		EXTRARES, 
		"Url=https://mem.gfx.ms/scripts/me/MeControl/10.22059.5/en-US/meCore.min.js", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver=%272.1%27&name=%27Ms.Webi.MeControl.TrackedScenario%27&time=%272022-05-06T16%3A21%3A58.968Z%27&appId=%27JS%3AMeControl%27&cV=%276PQTe0c5bcSrhWdv.5%27&flags=2097152&ext-javascript-ver=%271.1%27&ext-javascript-libVer=%274.2.3%27&ext-javascript-domain=%27support.microsoft.com%27&ext-javascript-userConsent=false&ext-app-env=%27Prod%27&*partner=%27smcconvergence%27&*controlVersion=%2710.22059.5%27&*market=%27en-US%27&*scenario=%27Load%27&"
		"*action=%27END%27&*previousAction=%27START%27&*success=true&*durationMs=9553.099999999998&*details=%27load%27", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_auto_header("Cache-Control", 
		"no-cache");

	web_custom_request("selection", 
		"URL=https://arc.msn.com/v4/api/selection?SCS_promotionCategory=uhfbuybutton%3Brailbanner_m365&articleType=railbanner_m365&authType=None&country=us&locale=en-us&muid=1B4F6F10E8CF6DE93F087E82ECCF6BE7&operatingSystem=Windows10&placement=88000534&scs_ecsFlightId="
		"P-E-1013190-3%3BP-E-1013187-9%3BP-E-1010984-3%3BP-E-1012960-C1%3BP-E-1009540-C1%3BP-E-1005647-4%3BP-E-1002779-3%3BP-R-1005895-2%3BP-R-1000786-2%3BP-R-116475-2%3BP-R-113175-4%3BP-R-113174-1%3BP-R-110379-1%3BP-R-107838-1%3BP-R-106524-1%3BP-R-101783-1%3BP-R-97577-1%3BP-R-97457-1%3BP-R-94390-1%3BP-R-94360-2%3BP-R-93416-1%3BP-R-93413-1%3BP-R-90963-2%3BP-R-85265-4%3BP-R-73296-2&bcnt=10", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver=%272.1%27&name=%27Ms.Webi.OutgoingRequest%27&time=%272022-05-06T16%3A21%3A49.411Z%27&appId=%27JS%3AMeControl%27&cV=%276PQTe0c5bcSrhWdv.1%27&flags=2097152&ext-javascript-ver=%271.1%27&ext-javascript-libVer=%274.2.3%27&ext-javascript-domain=%27support.microsoft.com%27&ext-javascript-userConsent=false&ext-app-env=%27Prod%27&-operationName=%27meversion%27&-dependencyOperationName=%27LoadResource%27&-dependencyName=%27MeControl%27&"
		"-latencyMs=7387&-succeeded=true&-targetUri=%27https%3A%2F%2Fmem.gfx.ms%2Fmeversion%3Fpartner%3D**%26market%3D**%26uhf%3D**%27&*baseType=%27Ms.Qos.OutgoingServiceRequest%27&*pageName=%27None%27&*impressionGuid=%279e611daf-1ae3-4507-d7e4-4687b1d041e1%27&*market=%27en-US%27&*customData="
		"%27%7B%22computedDuration%22%3A30023%2C%22perfDuration%22%3A7386.700000000001%2C%22metaTags%22%3A%7B%22pgpart%22%3A%22smcconvergence%22%7D%2C%22config%22%3A%7B%22ver%22%3A%2210.22059.5%22%2C%22mkt%22%3A%22en-US%22%2C%22ptn%22%3A%22smcconvergence%22%2C%22gfx%22%3A%22https%3A%2F%2Famcdn.msftauth.net%22%2C%22dbg%22%3Afalse%2C%22aad%22%3Atrue%2C%22int%22%3Afalse%2C%22pxy%22%3Atrue%2C%22msTxt%22%3Afalse%2C%22rwd%22%3Atrue%2C%22telEvs%22%3A%22PageAction%2C%20PageView%2C%20ContentUpdate%2C%20OutgoingRequ"
		"est%2C%20ClientError%2C%20PartnerApiCall%2C%20TrackedScenario%22%2C%22instKey%22%3A%22b8ffe739c47a401190627519795ca4d2-044a8309-9d4b-430b-9d47-6e87775cbab6-6888%22%2C%22oneDSUrl%22%3A%22https%3A%2F%2Fjs.monitor.azure.com%2Fscripts%2Fc%2Fms.shared.analytics-3.1.11.min.js%22%2C%22remAcc%22%3Atrue%2C%22main%22%3A%22meBoot%22%2C%22wrapperId%22%3A%22uhf%22%2C%22cdnRegex%22%3A%22%5E(%3F%3Ahttps%3F%3A%5C%5C%2F%5C%5C%2F)%3F(mem%5C%5C.gfx%5C%5C.ms(%3F!%5C%5C.)%7Ccontrols%5C%5C.account.microsoft%3F"
		"(%3F%3A-int%7C-dev)%3F(%5C%5C.com)%3F(%3A%5B0-9%5D%7B1%2C6%7D)%7Camcdn%5C%5C.ms(%3F%3Aft)%3Fauth%5C%5C.net(%3F!%5C%5C.))"
		"%22%2C%22timeoutMs%22%3A30000%2C%22graphv2%22%3Atrue%2C%22graphinfo%22%3A%7B%22graphclientid%22%3A%227eadcef8-456d-4611-9480-4fff72b8b9e2%22%2C%22graphscope%22%3A%22user.read%22%2C%22graphcodeurl%22%3A%22https%3A%2F%2Flogin.microsoftonline.com%2Fcommon%2Foauth2%2Fv2.0%2Fauthorize%22%2C%22graphredirecturi%22%3A%22https%3A%2F%2Famcdn.msftauth.net%2Fme%2Fcallgraph%22%2C%22graphphotourl%22%3A%22https%3A%2F%2Fgraph.microsoft.com%2Fv1.0%2Fme%2Fphotos%2F96x96%2F%24value%22%7D%2C%22aadUrl%22%3A%22https%3A"
		"%2F%2Fmyaccount.microsoft.com%22%2C%22msaUrl%22%3A%22https%3A%2F%2Faccount.microsoft.com%2F%22%7D%2C%22url%22%3A%22https%3A%2F%2Fsupport.microsoft.com%2Fen-us%2Foffice%2Fthis-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554%3Fui%3D**%26rs%3D**%26ad%3D**%22%2C%22accts%22%3A%220-0%22%7D%27", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver=%272.1%27&name=%27Ms.Webi.OutgoingRequest%27&time=%272022-05-06T16%3A21%3A58.909Z%27&appId=%27JS%3AMeControl%27&cV=%276PQTe0c5bcSrhWdv.3%27&flags=2097152&ext-javascript-ver=%271.1%27&ext-javascript-libVer=%274.2.3%27&ext-javascript-domain=%27support.microsoft.com%27&ext-javascript-userConsent=false&ext-app-env=%27Prod%27&-operationName=%27meBoot.min.js%27&-dependencyOperationName=%27DownloadScript%27&-dependencyName=%27MeControl%27&"
		"-latencyMs=9474&-succeeded=true&-targetUri=%27https%3A%2F%2Fmem.gfx.ms%2Fscripts%2Fme%2FMeControl%2F10.22059.5%2Fen-US%2FmeBoot.min.js%27&*baseType=%27Ms.Qos.OutgoingServiceRequest%27&*pageName=%27None%27&*impressionGuid=%279e611daf-1ae3-4507-d7e4-4687b1d041e1%27&*market=%27en-US%27&*customData="
		"%27%7B%22computedDuration%22%3A9481.900000000001%2C%22perfDuration%22%3A9474.399999999997%2C%22metaTags%22%3A%7B%22pgpart%22%3A%22smcconvergence%22%7D%2C%22config%22%3A%7B%22ver%22%3A%2210.22059.5%22%2C%22mkt%22%3A%22en-US%22%2C%22ptn%22%3A%22smcconvergence%22%2C%22gfx%22%3A%22https%3A%2F%2Famcdn.msftauth.net%22%2C%22dbg%22%3Afalse%2C%22aad%22%3Atrue%2C%22int%22%3Afalse%2C%22pxy%22%3Atrue%2C%22msTxt%22%3Afalse%2C%22rwd%22%3Atrue%2C%22telEvs%22%3A%22PageAction%2C%20PageView%2C%20ContentUpdate%2C%20"
		"OutgoingRequest%2C%20ClientError%2C%20PartnerApiCall%2C%20TrackedScenario%22%2C%22instKey%22%3A%22b8ffe739c47a401190627519795ca4d2-044a8309-9d4b-430b-9d47-6e87775cbab6-6888%22%2C%22oneDSUrl%22%3A%22https%3A%2F%2Fjs.monitor.azure.com%2Fscripts%2Fc%2Fms.shared.analytics-3.1.11.min.js%22%2C%22remAcc%22%3Atrue%2C%22main%22%3A%22meBoot%22%2C%22wrapperId%22%3A%22uhf%22%2C%22cdnRegex%22%3A%22%5E(%3F%3Ahttps%3F%3A%5C%5C%2F%5C%5C%2F)%3F(mem%5C%5C.gfx%5C%5C.ms(%3F!%5C%5C.)"
		"%7Ccontrols%5C%5C.account.microsoft%3F(%3F%3A-int%7C-dev)%3F(%5C%5C.com)%3F(%3A%5B0-9%5D%7B1%2C6%7D)%7Camcdn%5C%5C.ms(%3F%3Aft)%3Fauth%5C%5C.net(%3F!%5C%5C.))"
		"%22%2C%22timeoutMs%22%3A30000%2C%22graphv2%22%3Atrue%2C%22graphinfo%22%3A%7B%22graphclientid%22%3A%227eadcef8-456d-4611-9480-4fff72b8b9e2%22%2C%22graphscope%22%3A%22user.read%22%2C%22graphcodeurl%22%3A%22https%3A%2F%2Flogin.microsoftonline.com%2Fcommon%2Foauth2%2Fv2.0%2Fauthorize%22%2C%22graphredirecturi%22%3A%22https%3A%2F%2Famcdn.msftauth.net%2Fme%2Fcallgraph%22%2C%22graphphotourl%22%3A%22https%3A%2F%2Fgraph.microsoft.com%2Fv1.0%2Fme%2Fphotos%2F96x96%2F%24value%22%7D%2C%22aadUrl%22%3A%22https%3A"
		"%2F%2Fmyaccount.microsoft.com%22%2C%22msaUrl%22%3A%22https%3A%2F%2Faccount.microsoft.com%2F%22%7D%2C%22url%22%3A%22https%3A%2F%2Fsupport.microsoft.com%2Fen-us%2Foffice%2Fthis-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554%3Fui%3D**%26rs%3D**%26ad%3D**%22%2C%22accts%22%3A%220-0%22%7D%27", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		LAST);

	web_add_header("Accept-Language", 
		"en-US");

	web_custom_request("1.0_3", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.0.2&apikey=05eaeec884e14734aa4aa95e87c73bac-0f0d742b-73a2-40ff-918f-8d763a8b3544-7098&upload-time=1651854120555&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=use-collector-delta&w=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"name\":\"Ms.Web.ContentUpdate\",\"time\":\"2022-05-06T16:21:59.562Z\",\"ver\":\"4.0\",\"iKey\":\"o:05eaeec884e14734aa4aa95e87c73bac\",\"ext\":{\"web\":{\"isManual\":false,\"domain\":\"support.microsoft.com\",\"browser\":\"MSIE\",\"browserVer\":\"11.0\",\"screenRes\":\"1920X1080\",\"userConsent\":true},\"sdk\":{\"ver\":\"1DS-Web-JS-3.0.2\",\"seq\":2,\"epoch\":\"1651854109726\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\""
		"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t:1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"os\":{\"name\":\"Windows\",\"ver\":\"10\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"baseData\":{\"f\":{\"behavior\":{\"t\":6},\"pageHeight\":{\"t\":6},\"vpHeight\":{\"t\":6},\"vpWidth\":{\"t\":6},\"vScrollOffset\":{\"t\":6},\""
		"hScrollOffset\":{\"t\":6}}}}}},\"data\":{\"baseType\":\"ContentUpdateData\",\"baseData\":{\"name\":\"this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554\",\"uri\":\"https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us\",\"market\":\"en-US\",\"pageType\":\"Article\",\"isLoggedIn\":false,\"id\":\"3e00fb43-7160-44d4-a7c0-2307ba08f1cb\",\"properties\":{\"pageTags\":{\""
		"metaTags\":{\"schemaName\":\"HELP ARTICLE\",\"asst\":\"8f5fc675-cd47-414c-9535-12821ddfc554\",\"env\":\"Production\",\"contentlang\":\"en\",\"userFlightingId\":\"7c001c0c-e8ee-4fb5-bd34-d9f039843a01\",\"expid\":\"P-E-1013190-3-5;P-E-1013187-9-6;P-E-1010984-3-6;P-E-1012960-C1-5;P-E-1009540-C1-11;P-E-1005647-4-7;P-E-1002779-3-6;P-R-1005895-2-11;P-R-1000786-2-5;P-R-116475-2-8;P-R-113175-4-7;P-R-113174-1-2;P-R-110379-1-7;P-R-107838-1-4;P-R-106524-1-3;P-R-101783-1-2;P-R-97577-1-5;P-R-97457-1-10;"
		"P-R-94390-1-2;P-R-94360-2-18;P-R-93416-1-3;P-R-93413-1-2;P-R-90963-2-2;P-R-85265-4-8;P-R-73296-2-15\",\"origindatacenter\":\"Central US\",\"variationid\":\"ECS\",\"prdct\":\"office.com\",\"stv\":\"1.0.0-62f87f9ffa29a30037b2a05f13905cf8ce0d48fc\",\"serverImpressionGuid\":\"00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00\",\"title\":\"This website doesn't work in Internet Explorer\",\"selfHelpExp\":\"railbanner_m365\",\"ms.lang\":\"en\",\"ms.loc\":\"US\",\"ms.ocpub.assetID\":\""
		"8f5fc675-cd47-414c-9535-12821ddfc554\"}},\"version\":\"PostChannel=3.0.2;SystemPropertiesCollector=3.0.2;WebAnalyticsPlugin=3.0.2\"},\"ver\":\"1.0\",\"behavior\":0,\"pageHeight\":1678,\"content\":\"[{\\\"cN\\\":\\\"headerArea\\\",\\\"cT\\\":\\\"Area_coreuiArea\\\",\\\"id\\\":\\\"a1Body\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"Body\\\"},{\\\"cN\\\":\\\"headerRegion\\\",\\\"cT\\\":\\\"Region_coreui-region\\\",\\\"id\\\":\\\"r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"a1\\\"},{\\\"cN\\\":\\\"headerUniversalHeader\\"
		"\",\\\"cT\\\":\\\"Module_coreui-universalheader\\\",\\\"id\\\":\\\"m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"r1a1\\\"},{\\\"cN\\\":\\\"Universal Header_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Logo_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Support_nav\\\",\\\"id\\\":\\\"n6c3m1r1a1\\\",\\\"sN\\\":6,\\\"aN\\\":\\\""
		"c3m1r1a1\\\"},{\\\"cN\\\":\\\"Category nav_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c8c3m1r1a1\\\",\\\"sN\\\":8,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Microsoft 365_nav\\\",\\\"id\\\":\\\"n2c8c3m1r1a1\\\",\\\"sN\\\":2,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Office_nav\\\",\\\"id\\\":\\\"n3c8c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Windows_nav\\\",\\\"id\\\":\\\"n4c8c3m1r1a1\\\",\\\"sN\\\":4,\\\"aN\\\":\\\"c8c3m1r1a1\\\"}"
		",{\\\"cN\\\":\\\"CatNav_Surface_nav\\\",\\\"id\\\":\\\"n5c8c3m1r1a1\\\",\\\"sN\\\":5,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Xbox_nav\\\",\\\"id\\\":\\\"n6c8c3m1r1a1\\\",\\\"sN\\\":6,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Deals_nav\\\",\\\"id\\\":\\\"n7c8c3m1r1a1\\\",\\\"sN\\\":7,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_cta_Buy Microsoft 365_nav\\\",\\\"id\\\":\\\"n9c8c3m1r1a1\\\",\\\"sN\\\":9,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"Header "
		"actions_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c9c3m1r1a1\\\",\\\"sN\\\":9,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c1c9c3m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_More_nonnav\\\",\\\"id\\\":\\\"nn1c1c9c3m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Search_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3c1c9c3m1r1a1\\\",\\\"sN\\\":3,\\"
		"\"aN\\\":\\\"c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"Search_nav\\\",\\\"id\\\":\\\"n2c3c1c9c3m1r1a1\\\",\\\"sN\\\":2,\\\"aN\\\":\\\"c3c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Account_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c5c1c9c3m1r1a1\\\",\\\"sN\\\":5,\\\"aN\\\":\\\"c1c9c3m1r1a1\\\"}]\",\"contentVer\":\"2.0\",\"vpHeight\":911,\"vpWidth\":2560,\"vScrollOffset\":0,\"hScrollOffset\":0},\"cookieEnabled\":true,\"isDomComplete\":true}}", 
		LAST);

	web_add_auto_header("Access-Control-Request-Headers", 
		"cache-control, content-type");

	web_add_auto_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("1.0_4", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.1.6&apikey=83328b3c5ab7488692991e7d63483cff-e640bd11-2392-49b1-b739-ed8e62bcb870-7240&upload-time=1651854121329&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=34670&w=0", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("SRCHUID=V=2&GUID=9D57244A80A049EF80A27AB032E050AF&dmnchg=1; DOMAIN=support.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=support.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=support.microsoft.com");

	web_add_cookie("SUID=M; DOMAIN=support.microsoft.com");

	web_add_cookie("MC1=GUID=f705e4590bb346f2abfe89775f98e7b0&HASH=f705&LV=202201&V=4&LU=1642702158710; DOMAIN=support.microsoft.com");

	web_add_cookie("MUID=162C2354914A64813B8532C690E2651D; DOMAIN=support.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20220120; DOMAIN=support.microsoft.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANGV2=en&SRCHLANG=en; DOMAIN=support.microsoft.com");

	web_custom_request("1.0_5", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.1.6&apikey=83328b3c5ab7488692991e7d63483cff-e640bd11-2392-49b1-b739-ed8e62bcb870-7240&upload-time=1651854120076&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=34670&w=0", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://support.microsoft.com/favicon-32x32.png", "Referer=", ENDITEM, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver=%272.1%27&name=%27Ms.Webi.MeControl.TrackedScenario%27&time=%272022-05-06T16%3A21%3A59.571Z%27&appId=%27JS%3AMeControl%27&cV=%276PQTe0c5bcSrhWdv.6%27&flags=2097152&ext-javascript-ver=%271.1%27&ext-javascript-libVer=%274.2.3%27&ext-javascript-domain=%27support.microsoft.com%27&ext-javascript-userConsent=false&ext-app-env=%27Prod%27&*partner=%27smcconvergence%27&*controlVersion=%2710.22059.5%27&*market=%27en-US%27&*scenario="
		"%27Interactive%27&*action=%27END%27&*previousAction=%27START%27&*success=true&*durationMs=10156.699999999997&*details=%27Web%20header%27", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");

	web_revert_auto_header("Access-Control-Request-Method");

	web_add_auto_header("Accept-Language", 
		"en-US");

	web_custom_request("v1", 
		"URL=https://web.vortex.data.microsoft.com/collect/v1?$mscomCookies=false&ext-javascript-msfpc='GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165'", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"ver\":\"2.1\",\"name\":\"Ms.Webi.ContentUpdate\",\"time\":\"2022-05-06T16:21:59.208Z\",\"os\":\"Windows\",\"appId\":\"JS:support.office.com\",\"data\":{\"baseData\":{\"ver\":\"1.0\",\"impressionGuid\":\"0cd7ddcb-fcc0-4970-a8e7-b39eee536a06\",\"pageName\":\"this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554\",\"uri\":\"https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs="
		"en-us&ad=us\",\"market\":\"en-US\",\"pageTags\":\"{\\\"metaTags\\\":{\\\"schemaName\\\":\\\"HELP ARTICLE\\\",\\\"asst\\\":\\\"8f5fc675-cd47-414c-9535-12821ddfc554\\\",\\\"contentlang\\\":\\\"en\\\",\\\"userFlightingId\\\":\\\"7c001c0c-e8ee-4fb5-bd34-d9f039843a01\\\",\\\"expid\\\":\\\"P-E-1013190-3-5;P-E-1013187-9-6;P-E-1010984-3-6;P-E-1012960-C1-5;P-E-1009540-C1-11;P-E-1005647-4-7;P-E-1002779-3-6;P-R-1005895-2-11;P-R-1000786-2-5;P-R-116475-2-8;P-R-113175-4-7;P-R-113174-1-2;P-R-110379-1-7;"
		"P-R-107838-1-4;P-R-106524-1-3;P-R-101783-1-2;P-R-97577-1-5;P-R-97457-1-10;P-R-94390-1-2;P-R-94360-2-18;P-R-93416-1-3;P-R-93413-1-2;P-R-90963-2-2;P-R-85265-4-8;P-R-73296-2-15\\\",\\\"origindatacenter\\\":\\\"Central US\\\",\\\"variationid\\\":\\\"ECS\\\",\\\"prdct\\\":\\\"office.com\\\",\\\"stv\\\":\\\"1.0.0-62f87f9ffa29a30037b2a05f13905cf8ce0d48fc\\\",\\\"title\\\":\\\"This website doesn't work in Internet Explorer\\\",\\\"selfHelpExp\\\":\\\"railbanner_m365\\\",\\\"ms.lang\\\":\\\"en\\\",\\\""
		"ms.loc\\\":\\\"US\\\",\\\"ms.ocpub.assetID\\\":\\\"8f5fc675-cd47-414c-9535-12821ddfc554\\\"},\\\"timing\\\":\\\"{\\\\\\\"connectEnd\\\\\\\":1651854079019,\\\\\\\"connectStart\\\\\\\":1651854079019,\\\\\\\"domComplete\\\\\\\":1651854118978,\\\\\\\"domContentLoadedEventEnd\\\\\\\":1651854109378,\\\\\\\"domContentLoadedEventStart\\\\\\\":1651854109377,\\\\\\\"domInteractive\\\\\\\":1651854109068,\\\\\\\"domLoading\\\\\\\":1651854079019,\\\\\\\"domainLookupEnd\\\\\\\":1651854079019,\\\\\\\""
		"domainLookupStart\\\\\\\":1651854079019,\\\\\\\"fetchStart\\\\\\\":1651854079018,\\\\\\\"loadEventEnd\\\\\\\":1651854119001,\\\\\\\"loadEventStart\\\\\\\":1651854118981,\\\\\\\"msFirstPaint\\\\\\\":1651854082140,\\\\\\\"navigationStart\\\\\\\":1651854079005,\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":1651854079019,\\\\\\\"responseEnd\\\\\\\":1651854079019,\\\\\\\"responseStart\\\\\\\":1651854079019,\\\\\\\"unloadEventEnd\\\\\\\":0,\\\\\\\""
		"unloadEventStart\\\\\\\":0}\\\",\\\"AssetPerformance\\\":\\\"[{\\\\\\\"connectEnd\\\\\\\":41.1484,\\\\\\\"connectStart\\\\\\\":41.1484,\\\\\\\"domainLookupEnd\\\\\\\":41.1484,\\\\\\\"domainLookupStart\\\\\\\":41.1484,\\\\\\\"fetchStart\\\\\\\":41.1484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":41.1484,\\\\\\\"responseEnd\\\\\\\":41.9484,\\\\\\\"responseStart\\\\\\\":41.1484,\\\\\\\"duration\\\\\\\""
		":4.299999999999997,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/SocContent/css\\\\\\\",\\\\\\\"startTime\\\\\\\":37.6484},{\\\\\\\"connectEnd\\\\\\\":43.2484,\\\\\\\"connectStart\\\\\\\":43.2484,\\\\\\\"domainLookupEnd\\\\\\\":43.2484,\\\\\\\"domainLookupStart\\\\\\\":43.2484,\\\\\\\"fetchStart\\\\\\\":43.2484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\""
		"requestStart\\\\\\\":938.9484,\\\\\\\"responseEnd\\\\\\\":2559.2484,\\\\\\\"responseStart\\\\\\\":2083.8484,\\\\\\\"duration\\\\\\\":2517,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/SocContent/articleCss\\\\\\\",\\\\\\\"startTime\\\\\\\":42.2484},{\\\\\\\"connectEnd\\\\\\\":44.1484,\\\\\\\"connectStart\\\\\\\":44.1484,\\\\\\\"domainLookupEnd\\\\\\\":44.1484,\\\\\\\"domainLookupStart\\\\\\\":44.1484,\\\\\\\"fetchStart\\\\\\\":44.1484"
		",\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":938.4484,\\\\\\\"responseEnd\\\\\\\":2745.3484,\\\\\\\"responseStart\\\\\\\":2703.7484,\\\\\\\"duration\\\\\\\":2702.1,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/SocContent/stickyFeedbackCss\\\\\\\",\\\\\\\"startTime\\\\\\\":43.2484},{\\\\\\\"connectEnd\\\\\\\":45.3484,\\\\\\\""
		"connectStart\\\\\\\":45.3484,\\\\\\\"domainLookupEnd\\\\\\\":45.3484,\\\\\\\"domainLookupStart\\\\\\\":45.3484,\\\\\\\"fetchStart\\\\\\\":45.3484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":939.0484,\\\\\\\"responseEnd\\\\\\\":1743.2484,\\\\\\\"responseStart\\\\\\\":1692.8484,\\\\\\\"duration\\\\\\\":1699.1,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://"
		"support.microsoft.com/SocContent/floodgate\\\\\\\",\\\\\\\"startTime\\\\\\\":44.1484},{\\\\\\\"connectEnd\\\\\\\":46.6484,\\\\\\\"connectStart\\\\\\\":46.6484,\\\\\\\"domainLookupEnd\\\\\\\":46.6484,\\\\\\\"domainLookupStart\\\\\\\":46.6484,\\\\\\\"fetchStart\\\\\\\":46.6484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":938.8484,\\\\\\\"responseEnd\\\\\\\":2668.4484,\\\\\\\"responseStart\\\\\\\""
		":2665.7484,\\\\\\\"duration\\\\\\\":2623.1000000000003,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/SocContent/officeShared\\\\\\\",\\\\\\\"startTime\\\\\\\":45.3484},{\\\\\\\"connectEnd\\\\\\\":48.5484,\\\\\\\"connectStart\\\\\\\":48.5484,\\\\\\\"domainLookupEnd\\\\\\\":48.5484,\\\\\\\"domainLookupStart\\\\\\\":48.5484,\\\\\\\"fetchStart\\\\\\\":48.5484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0"
		",\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":938.6484,\\\\\\\"responseEnd\\\\\\\":1786.1484,\\\\\\\"responseStart\\\\\\\":1745.7484,\\\\\\\"duration\\\\\\\":1739.4,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/css/feedback/feedback.css?v=O5RN1PkkM70yJ1hMirz0oLl4x6erVdeAAVT709pcVKM\\\\\\\",\\\\\\\"startTime\\\\\\\":46.7484},{\\\\\\\"connectEnd\\\\\\\":50.1484,\\\\\\\"connectStart\\\\\\\":50.1484,\\\\\\\""
		"domainLookupEnd\\\\\\\":50.1484,\\\\\\\"domainLookupStart\\\\\\\":50.1484,\\\\\\\"fetchStart\\\\\\\":50.1484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":1565.2484,\\\\\\\"responseEnd\\\\\\\":2267.7484,\\\\\\\"responseStart\\\\\\\":2181.1484,\\\\\\\"duration\\\\\\\":2219.2,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/css/promotionbanner/"
		"promotion-banner.css?v=vCsre4plYXZ38N4Rw4guTFoeye3W_43pFKzG0qRZ1mI\\\\\\\",\\\\\\\"startTime\\\\\\\":48.5484},{\\\\\\\"connectEnd\\\\\\\":54.3484,\\\\\\\"connectStart\\\\\\\":54.3484,\\\\\\\"domainLookupEnd\\\\\\\":54.3484,\\\\\\\"domainLookupStart\\\\\\\":54.3484,\\\\\\\"fetchStart\\\\\\\":54.3484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":1565.9484,\\\\\\\"responseEnd\\\\\\\":2173.4484,\\\\\\\""
		"responseStart\\\\\\\":2165.4484,\\\\\\\"duration\\\\\\\":2123.2000000000003,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/css/PremiumBadge/premium-badge.css?v=cEt7WOR8PuG1vdwdSzC2TfEgZsvs0S6NLvhUo6ggByQ\\\\\\\",\\\\\\\"startTime\\\\\\\":50.2484},{\\\\\\\"connectEnd\\\\\\\":56.2484,\\\\\\\"connectStart\\\\\\\":56.2484,\\\\\\\"domainLookupEnd\\\\\\\":56.2484,\\\\\\\"domainLookupStart\\\\\\\":56.2484,\\\\\\\"fetchStart\\\\\\\":56.2484,"
		"\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":1566.2484,\\\\\\\"responseEnd\\\\\\\":2162.8484,\\\\\\\"responseStart\\\\\\\":2108.7484,\\\\\\\"duration\\\\\\\":2109.7999999999997,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/css/glyphs/glyphs.css?v=kPvveM70Qi-SCsm6pG1s1bcbAzNVat9mXeYmVd8w49A\\\\\\\",\\\\\\\"startTime\\\\\\\":53.0484},"
		"{\\\\\\\"connectEnd\\\\\\\":57.4484,\\\\\\\"connectStart\\\\\\\":57.4484,\\\\\\\"domainLookupEnd\\\\\\\":57.4484,\\\\\\\"domainLookupStart\\\\\\\":57.4484,\\\\\\\"fetchStart\\\\\\\":57.4484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":1566.4484,\\\\\\\"responseEnd\\\\\\\":2272.6484,\\\\\\\"responseStart\\\\\\\":2266.5484,\\\\\\\"duration\\\\\\\":2217.9,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\""
		",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/css/SearchBox/search-box.css?v=qYKggedDRCggfW_koHnaCVKxnSkMD8EiYPvVvZSSKK0\\\\\\\",\\\\\\\"startTime\\\\\\\":54.7484},{\\\\\\\"connectEnd\\\\\\\":69.5484,\\\\\\\"connectStart\\\\\\\":69.5484,\\\\\\\"domainLookupEnd\\\\\\\":69.5484,\\\\\\\"domainLookupStart\\\\\\\":69.5484,\\\\\\\"fetchStart\\\\\\\":69.5484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\""
		"requestStart\\\\\\\":69.5484,\\\\\\\"responseEnd\\\\\\\":69.7484,\\\\\\\"responseStart\\\\\\\":69.5484,\\\\\\\"duration\\\\\\\":12.700000000000002,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://www.microsoft.com/onerfstatics/marketingsites-wcus-prod/west-european/shell/_scrf/css/themes=default.device=uplevel_web_pc/79-4cdd0a/33-ae3d41/a5-4bf7a2/13-8e1ceb/81-32f0c0/5c-b7b685/dd-4224e1/ef-a24652?ver=2.0&_cf=20210618\\\\\\\",\\\\\\\"startTime\\\\\\\":57.0484},"
		"{\\\\\\\"connectEnd\\\\\\\":0,\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":81.8484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\"responseEnd\\\\\\\":82.1484,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":11.899999999999991,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\""
		"https://statics-marketingsites-wcus-ms-com.akamaized.net/statics/override.css\\\\\\\",\\\\\\\"startTime\\\\\\\":70.2484},{\\\\\\\"connectEnd\\\\\\\":84.0484,\\\\\\\"connectStart\\\\\\\":84.0484,\\\\\\\"domainLookupEnd\\\\\\\":84.0484,\\\\\\\"domainLookupStart\\\\\\\":84.0484,\\\\\\\"fetchStart\\\\\\\":84.0484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"link\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":1630.8484,\\\\\\\"responseEnd\\\\\\\":2341.7484,"
		"\\\\\\\"responseStart\\\\\\\":2283.3484,\\\\\\\"duration\\\\\\\":2259.2,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/SocContent/topNavCss\\\\\\\",\\\\\\\"startTime\\\\\\\":82.5484},{\\\\\\\"connectEnd\\\\\\\":85.9484,\\\\\\\"connectStart\\\\\\\":85.9484,\\\\\\\"domainLookupEnd\\\\\\\":85.9484,\\\\\\\"domainLookupStart\\\\\\\":85.9484,\\\\\\\"fetchStart\\\\\\\":85.9484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\""
		"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":1643.7484,\\\\\\\"responseEnd\\\\\\\":6623.2484,\\\\\\\"responseStart\\\\\\\":2748.4484,\\\\\\\"duration\\\\\\\":6539.3,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/lib/ucs/dist/ucsCreativeService.js?v=ci9fofbz1MUpqlZRZJdRDLzqUTHnXjVjyFKUqFQZ6-4\\\\\\\",\\\\\\\"startTime\\\\\\\":83.9484},{\\\\\\\"connectEnd\\\\\\\":339.7484,\\\\\\\"connectStart\\\\\\\""
		":339.7484,\\\\\\\"domainLookupEnd\\\\\\\":339.7484,\\\\\\\"domainLookupStart\\\\\\\":339.7484,\\\\\\\"fetchStart\\\\\\\":339.7484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":339.7484,\\\\\\\"responseEnd\\\\\\\":340.6484,\\\\\\\"responseStart\\\\\\\":339.7484,\\\\\\\"duration\\\\\\\":9,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://ajax.aspnetcdn.com/ajax/"
		"jQuery/jquery-3.5.1.min.js\\\\\\\",\\\\\\\"startTime\\\\\\\":331.6484},{\\\\\\\"connectEnd\\\\\\\":0,\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":360.4484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\"responseEnd\\\\\\\":360.7484,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":9,\\\\\\\""
		"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://az725175.vo.msecnd.net/scripts/jsll-4.3.5.js\\\\\\\",\\\\\\\"startTime\\\\\\\":351.7484},{\\\\\\\"connectEnd\\\\\\\":0,\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":366.7484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\""
		"responseEnd\\\\\\\":367.0484,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":6.100000000000023,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://js.monitor.azure.com/scripts/c/ms.analytics-web-3.1.6.min.js\\\\\\\",\\\\\\\"startTime\\\\\\\":360.9484},{\\\\\\\"connectEnd\\\\\\\":0,\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":374.4484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\""
		"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\"responseEnd\\\\\\\":374.8484,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":7.5,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://wcpstatic.microsoft.com/mscc/lib/v2/wcp-consent.js\\\\\\\",\\\\\\\"startTime\\\\\\\":367.3484},{\\\\\\\"connectEnd\\\\\\\":377.8484,\\\\\\\"connectStart\\\\\\\":377.8484,\\\\\\\"domainLookupEnd\\\\\\\""
		":377.8484,\\\\\\\"domainLookupStart\\\\\\\":377.8484,\\\\\\\"fetchStart\\\\\\\":377.8484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":377.8484,\\\\\\\"responseEnd\\\\\\\":378.3484,\\\\\\\"responseStart\\\\\\\":377.8484,\\\\\\\"duration\\\\\\\":2.8000000000000113,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://www.microsoft.com/onerfstatics/"
		"marketingsites-wcus-prod/shell/_scrf/js/themes=default/8e-e88b64/93-04b71e/dd-2cee44/49-a00ab0/92-02e55d/7c-dcea75/75-fca72d/ed-e77ee7/d5-bf34c0/a9-078595/7a-7ea8cc/2d-40bdad/23-e8cd2b/96-eb5423/e6-6b0cce/d1-98d78a/a0-23c4ba/a7-f7a340/48-6ed936/2e-ca165a/fc-169dd8/8e-60935c/87-fecbed/96-6ed6eb/c3-eb62e0/ad-ffd6bf/35-621acc/b0-07f293/1e-9d9d16/52-f0367f/1f-b57352/8d-b89eaf/e1-ed258e/20-0b10e2/6b-0f1117/fb-5e9831/37-8473b9?ver=2.0&_cf=20210618&iife=1\\\\\\\",\\\\\\\"startTime\\\\\\\":375.5484},"
		"{\\\\\\\"connectEnd\\\\\\\":0,\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":384.9484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\"responseEnd\\\\\\\":7765.2484,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":7386.700000000001,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\""
		":\\\\\\\"https://mem.gfx.ms/meversion?partner=SMCConvergence&market=en-us&uhf=1\\\\\\\",\\\\\\\"startTime\\\\\\\":378.5484},{\\\\\\\"connectEnd\\\\\\\":386.3484,\\\\\\\"connectStart\\\\\\\":386.3484,\\\\\\\"domainLookupEnd\\\\\\\":386.3484,\\\\\\\"domainLookupStart\\\\\\\":386.3484,\\\\\\\"fetchStart\\\\\\\":386.3484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":2034.6484,\\\\\\\"responseEnd\\\\\\\""
		":2460.7484,\\\\\\\"responseStart\\\\\\\":2452.2484,\\\\\\\"duration\\\\\\\":2075.7,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/js/TelemetryLogging.js?v=f4vItOfZ5XSCjEZx1tgEaLysr1h7lmsOGaBapPNdHSo\\\\\\\",\\\\\\\"startTime\\\\\\\":385.0484},{\\\\\\\"connectEnd\\\\\\\":387.4484,\\\\\\\"connectStart\\\\\\\":387.4484,\\\\\\\"domainLookupEnd\\\\\\\":387.4484,\\\\\\\"domainLookupStart\\\\\\\":387.4484,\\\\\\\"fetchStart\\\\\\\":387.4484,"
		"\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":6402.7484,\\\\\\\"responseEnd\\\\\\\":9124.7484,\\\\\\\"responseStart\\\\\\\":9061.4484,\\\\\\\"duration\\\\\\\":8738.4,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/js/promotionBanner.js?v=2GcMNPM9eqxAeHw4nDyOmXleiS66xkUfynmVy--xffU\\\\\\\",\\\\\\\"startTime\\\\\\\":386.3484},{\\\\\\\""
		"connectEnd\\\\\\\":388.6484,\\\\\\\"connectStart\\\\\\\":388.6484,\\\\\\\"domainLookupEnd\\\\\\\":388.6484,\\\\\\\"domainLookupStart\\\\\\\":388.6484,\\\\\\\"fetchStart\\\\\\\":388.6484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":6402.5484,\\\\\\\"responseEnd\\\\\\\":8787.1484,\\\\\\\"responseStart\\\\\\\":6875.6484,\\\\\\\"duration\\\\\\\":8399.7,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\","
		"\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/js/SearchBox.Main.min.js?v=2tVRRNv7jalVKuruqr3LcWVvmJ-wfrj_Y2dG_6xXshk\\\\\\\",\\\\\\\"startTime\\\\\\\":387.4484},{\\\\\\\"connectEnd\\\\\\\":389.7484,\\\\\\\"connectStart\\\\\\\":389.7484,\\\\\\\"domainLookupEnd\\\\\\\":389.7484,\\\\\\\"domainLookupStart\\\\\\\":389.7484,\\\\\\\"fetchStart\\\\\\\":389.7484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\""
		"requestStart\\\\\\\":25216.5484,\\\\\\\"responseEnd\\\\\\\":25730.8484,\\\\\\\"responseStart\\\\\\\":25572.7484,\\\\\\\"duration\\\\\\\":25342.1,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/js/feedback.js\\\\\\\",\\\\\\\"startTime\\\\\\\":388.7484},{\\\\\\\"connectEnd\\\\\\\":391.7484,\\\\\\\"connectStart\\\\\\\":391.7484,\\\\\\\"domainLookupEnd\\\\\\\":391.7484,\\\\\\\"domainLookupStart\\\\\\\":391.7484,\\\\\\\"fetchStart\\\\\\\""
		":391.7484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":6401.4484,\\\\\\\"responseEnd\\\\\\\":9058.3484,\\\\\\\"responseStart\\\\\\\":8790.5484,\\\\\\\"duration\\\\\\\":8668.5,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/socbundles/support\\\\\\\",\\\\\\\"startTime\\\\\\\":389.8484},{\\\\\\\"connectEnd\\\\\\\":395.3484,\\\\\\\""
		"connectStart\\\\\\\":395.3484,\\\\\\\"domainLookupEnd\\\\\\\":395.3484,\\\\\\\"domainLookupStart\\\\\\\":395.3484,\\\\\\\"fetchStart\\\\\\\":395.3484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":6403.5484,\\\\\\\"responseEnd\\\\\\\":6856.3484,\\\\\\\"responseStart\\\\\\\":6851.3484,\\\\\\\"duration\\\\\\\":6462.4,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://"
		"support.microsoft.com/socbundles/TopNav\\\\\\\",\\\\\\\"startTime\\\\\\\":393.9484},{\\\\\\\"connectEnd\\\\\\\":396.3484,\\\\\\\"connectStart\\\\\\\":396.3484,\\\\\\\"domainLookupEnd\\\\\\\":396.3484,\\\\\\\"domainLookupStart\\\\\\\":396.3484,\\\\\\\"fetchStart\\\\\\\":396.3484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":6400.8484,\\\\\\\"responseEnd\\\\\\\":7478.2484,\\\\\\\"responseStart\\\\\\\""
		":6899.7484,\\\\\\\"duration\\\\\\\":7082.900000000001,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/socbundles/article\\\\\\\",\\\\\\\"startTime\\\\\\\":395.3484},{\\\\\\\"connectEnd\\\\\\\":0,\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":9893.1484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\""
		"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\"responseEnd\\\\\\\":30060.3484,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":29664,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://videoplayercdn.osi.office.net/s/js/vxp.js\\\\\\\",\\\\\\\"startTime\\\\\\\":396.3484},{\\\\\\\"connectEnd\\\\\\\":400.7484,\\\\\\\"connectStart\\\\\\\":400.7484,\\\\\\\"domainLookupEnd\\\\\\\":400.7484,\\\\\\\"domainLookupStart\\\\\\\":400.7484,\\\\\\\""
		"fetchStart\\\\\\\":400.7484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":9233.2484,\\\\\\\"responseEnd\\\\\\\":11291.6484,\\\\\\\"responseStart\\\\\\\":9625.1484,\\\\\\\"duration\\\\\\\":10891.9,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://support.microsoft.com/socbundles/floodgate\\\\\\\",\\\\\\\"startTime\\\\\\\":399.7484},{\\\\\\\"connectEnd\\\\\\\":0,"
		"\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":3090.8484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\"responseEnd\\\\\\\":29086.2484,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":26009.8,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://"
		"web.vortex.data.microsoft.com/collect/v1/t.js?ver='2.1'&name='Ms.Webi.PageView'&time='2022-05-06T16%3A21%3A22.081Z'&os='Windows'&appId='JS%3Asupport.office.com'&-ver='1.0'&-impressionGuid='0cd7ddcb-fcc0-4970-a8e7-b39eee536a06'&-pageName='this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554'&-uri="
		"'https%3A%2F%2Fsupport.microsoft.com%2Fen-us%2Foffice%2Fthis-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554%3Fui%3Den-us%26rs%3Den-us%26ad%3Dus'&-market='en-US'&-pageType='Article'&-resHeight=1080&-resWidth=1920&-pageTags="
		"'%7B%22metaTags%22%3A%7B%22schemaName%22%3A%22HELP%20ARTICLE%22%2C%22asst%22%3A%228f5fc675-cd47-414c-9535-12821ddfc554%22%2C%22contentlang%22%3A%22en%22%2C%22userFlightingId%22%3A%227c001c0c-e8ee-4fb5-bd34-d9f039843a01%22%2C%22expid%22%3A%22P-E-1013190-3-5%3BP-E-1013187-9-6%3BP-E-1010984-3-6%3BP-E-1012960-C1-5%3BP-E-1009540-C1-11%3BP-E-1005647-4-7%3BP-E-1002779-3-6%3BP-R-1005895-2-11%3BP-R-1000786-2-5%3BP-R-116475-2-8%3BP-R-113175-4-7%3BP-R-113174-1-2%3BP-R-110379-1-7%3BP-R-107838-1-4%3BP-R-106524"
		"-1-3%3BP-R-101783-1-2%3BP-R-97577-1-5%3BP-R-97457-1-10%3BP-R-94390-1-2%3BP-R-94360-2-18%3BP-R-93416-1-3%3BP-R-93413-1-2%3BP-R-90963-2-2%3BP-R-85265-4-8%3BP-R-73296-2-15%22%2C%22origindatacenter%22%3A%22Central%20US%22%2C%22variationid%22%3A%22ECS%22%2C%22prdct%22%3A%22office.com%22%2C%22stv%22%3A%221.0.0-62f87f9ffa29a30037b2a05f13905cf8ce0d48fc%22%2C%22title%22%3A%22This%20website%20doesn't%20work%20in%20Internet%20Explorer%22%2C%22selfHelpExp%22%3A%22railbanner_m365%22%2C%22ms.lang%22%3A%22en%22%"
		"2C%22ms.loc%22%3A%22US%22%2C%22ms.ocpub.assetID%22%3A%228f5fc675-cd47-414c-9535-12821ddfc554%22%7D%7D'&-behavior=0&*baseType='Ms.Content.PageView'&*cookieEnabled=true&*isJs=true&*title='This%20website%20doesn't%20work%20in%20Internet%20Explorer'&*isLoggedIn=false&*serverImpressionGuid='00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00'&*flashInstalled=false&ext-app-env='Production'&ext-javascript-ver='1.1'&ext-javascript-libVer='4.3.5'&ext-javascript-domain='support.microsoft.com'&"
		"ext-javascript-msfpc='GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165'&ext-javascript-userConsent=true&ext-user-localId='t%3A1B4F6F10E8CF6DE93F087E82ECCF6BE7'&$mscomCookies=false\\\\\\\",\\\\\\\"startTime\\\\\\\":3076.4484},{\\\\\\\"connectEnd\\\\\\\":0,\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":30413.9484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\"
		"\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\"responseEnd\\\\\\\":39886.2484,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":9474.399999999997,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://mem.gfx.ms/scripts/me/MeControl/10.22059.5/en-US/meBoot.min.js\\\\\\\",\\\\\\\"startTime\\\\\\\":30411.8484},{\\\\\\\"connectEnd\\\\\\\":0,\\\\\\\"connectStart\\\\\\\":0,\\\\\\\"domainLookupEnd\\\\\\\":0,\\\\\\\""
		"domainLookupStart\\\\\\\":0,\\\\\\\"fetchStart\\\\\\\":39996.7484,\\\\\\\"initiatorType\\\\\\\":\\\\\\\"script\\\\\\\",\\\\\\\"redirectEnd\\\\\\\":0,\\\\\\\"redirectStart\\\\\\\":0,\\\\\\\"requestStart\\\\\\\":0,\\\\\\\"responseEnd\\\\\\\":0,\\\\\\\"responseStart\\\\\\\":0,\\\\\\\"duration\\\\\\\":0,\\\\\\\"entryType\\\\\\\":\\\\\\\"resource\\\\\\\",\\\\\\\"name\\\\\\\":\\\\\\\"https://mem.gfx.ms/scripts/me/MeControl/10.22059.5/en-US/meCore.min.js\\\\\\\",\\\\\\\"startTime\\\\\\\":39991.5484}]\\\""
		"}\",\"pageHeight\":1678,\"vpHeight\":911,\"vpWidth\":2560,\"behavior\":0,\"vScrollOffset\":0,\"hScrollOffset\":0,\"contentVer\":\"2.0\",\"content\":\"[{\\\"cN\\\":\\\"headerArea\\\",\\\"cT\\\":\\\"Area_coreuiArea\\\",\\\"id\\\":\\\"a1Body\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"Body\\\"},{\\\"cN\\\":\\\"headerRegion\\\",\\\"cT\\\":\\\"Region_coreui-region\\\",\\\"id\\\":\\\"r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"a1\\\"},{\\\"cN\\\":\\\"headerUniversalHeader\\\",\\\"cT\\\":\\\""
		"Module_coreui-universalheader\\\",\\\"id\\\":\\\"m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"r1a1\\\"},{\\\"cN\\\":\\\"Universal Header_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Logo_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Support_nav\\\",\\\"id\\\":\\\"n6c3m1r1a1\\\",\\\"sN\\\":6,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\""
		":\\\"Category nav_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c8c3m1r1a1\\\",\\\"sN\\\":8,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Microsoft 365_nav\\\",\\\"id\\\":\\\"n2c8c3m1r1a1\\\",\\\"sN\\\":2,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Office_nav\\\",\\\"id\\\":\\\"n3c8c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Windows_nav\\\",\\\"id\\\":\\\"n4c8c3m1r1a1\\\",\\\"sN\\\":4,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\""
		"CatNav_Surface_nav\\\",\\\"id\\\":\\\"n5c8c3m1r1a1\\\",\\\"sN\\\":5,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Xbox_nav\\\",\\\"id\\\":\\\"n6c8c3m1r1a1\\\",\\\"sN\\\":6,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Deals_nav\\\",\\\"id\\\":\\\"n7c8c3m1r1a1\\\",\\\"sN\\\":7,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_cta_Buy Microsoft 365_nav\\\",\\\"id\\\":\\\"n9c8c3m1r1a1\\\",\\\"sN\\\":9,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"Header actions_cont\\\",\\\"cT\\"
		"\":\\\"Container\\\",\\\"id\\\":\\\"c9c3m1r1a1\\\",\\\"sN\\\":9,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c1c9c3m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_More_nonnav\\\",\\\"id\\\":\\\"nn1c1c9c3m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Search_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3c1c9c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\""
		"c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"Search_nav\\\",\\\"id\\\":\\\"n2c3c1c9c3m1r1a1\\\",\\\"sN\\\":2,\\\"aN\\\":\\\"c3c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Account_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c5c1c9c3m1r1a1\\\",\\\"sN\\\":5,\\\"aN\\\":\\\"c1c9c3m1r1a1\\\"},{\\\"contentId\\\":\\\"topNav\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"contentName\\\":\\\"\\\\r\\\\nOffice support\\\\r\\\\n\\\\r\\\\n \\\\r\\\\nProducts  \\\\r\\\\n\\\\r\\\\nMicrosoft "
		"365\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nOffice\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nOutlook\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nMicrosoft Teams\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nOneDrive\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nOneNote\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nWindows\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nMicrosoft Edge\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nmore ...\\\\r\\\\n\\\\r\\\\n\\\\r\\\\n \\\\r\\\\nDevices  \\\\r\\\\n\\\\r\\\\nSurface\\\\r\\\"},{\\\"contentId\\\":\\\"MNU_OFFICE\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"100\\"
		"\",\\\"contentName\\\":\\\"MNU_OFFICE\\\"},{\\\"contentId\\\":\\\"SUBMNU_PRODUCTS\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"200\\\",\\\"contentName\\\":\\\"SUBMNU_PRODUCTS\\\",\\\"bhvr\\\":\\\"EXPAND\\\"},{\\\"contentId\\\":\\\"SUBMNU_DEVICES\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"300\\\",\\\"contentName\\\":\\\"SUBMNU_DEVICES\\\",\\\"bhvr\\\":\\\"EXPAND\\\"},{\\\"contentId\\\":\\\"LNK_WHATSNEW_HUB\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\""
		"400\\\",\\\"contentName\\\":\\\"LNK_WHATSNEW_HUB\\\"},{\\\"contentId\\\":\\\"LNK_INSTALL_OFFICE\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"500\\\",\\\"contentName\\\":\\\"LNK_INSTALL_OFFICE\\\"},{\\\"contentId\\\":\\\"SUBMNU_ACCOUNT_AND_BILLING\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"600\\\",\\\"contentName\\\":\\\"SUBMNU_ACCOUNT_AND_BILLING\\\",\\\"bhvr\\\":\\\"EXPAND\\\"},{\\\"contentId\\\":\\\"LNK_OFFICE_TEMPLATES\\\",\\\"areaName\\\":\\\"topnav\\\",\\\""
		"slotNumber\\\":\\\"700\\\",\\\"contentName\\\":\\\"LNK_OFFICE_TEMPLATES\\\"},{\\\"contentId\\\":\\\"SUBMNU_MORE_SUPPORT\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"800\\\",\\\"contentName\\\":\\\"SUBMNU_MORE_SUPPORT\\\",\\\"bhvr\\\":\\\"EXPAND\\\"},{\\\"contentId\\\":\\\"supArticleContent\\\",\\\"areaName\\\":\\\"content\\\",\\\"contentName\\\":\\\"\\\\r\\\\nThis website doesn't work in Internet Explorer\\\\r\\\\n\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nThe website you were trying to open "
		"doesn't work in Internet Explorer, so you've been redirected to Microsoft Edge.\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nInternet Explorer is re\\\"},{\\\"areaName\\\":\\\"share\\\",\\\"contentName\\\":\\\"      \\\"},{\\\"contentId\\\":\\\"ocFacebookButton\\\",\\\"areaName\\\":\\\"share\\\",\\\"slotNumber\\\":\\\"1\\\",\\\"contentName\\\":\\\"facebook\\\",\\\"bhvr\\\":\\\"SOCIALSHARE\\\"},{\\\"contentId\\\":\\\"ocLinkedInButton\\\",\\\"areaName\\\":\\\"share\\\",\\\"slotNumber\\\":\\\"2\\\",\\\""
		"contentName\\\":\\\"linkedIn\\\",\\\"bhvr\\\":\\\"SOCIALSHARE\\\"},{\\\"contentId\\\":\\\"ocEmailButton\\\",\\\"areaName\\\":\\\"share\\\",\\\"slotNumber\\\":\\\"3\\\",\\\"contentName\\\":\\\"email\\\",\\\"bhvr\\\":\\\"SOCIALSHARE\\\"}]\"},\"baseType\":\"Ms.Content.ContentUpdate\",\"title\":\"This website doesn't work in Internet Explorer\",\"cookieEnabled\":true,\"isJs\":true,\"isDomComplete\":true,\"isLoggedIn\":false,\"serverImpressionGuid\":\""
		"00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00\",\"pageLoadTime\":39976},\"ext\":{\"app\":{\"env\":\"Production\"},\"javascript\":{\"ver\":\"1.1\",\"libVer\":\"4.3.5\",\"domain\":\"support.microsoft.com\",\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\",\"userConsent\":true,\"consentDetails\":null},\"user\":{\"localId\":\"t:1B4F6F10E8CF6DE93F087E82ECCF6BE7\"}}}", 
		LAST);

	web_revert_auto_header("Cache-Control");

	web_add_header("Content-Type", 
		"application/json");

	web_custom_request("selection_2", 
		"URL=https://arc.msn.com/v4/api/selection?SCS_promotionCategory=uhfbuybutton%3Brailbanner_m365&articleType=railbanner_m365&authType=None&country=us&locale=en-us&muid=1B4F6F10E8CF6DE93F087E82ECCF6BE7&operatingSystem=Windows10&placement=88000534&scs_ecsFlightId="
		"P-E-1013190-3%3BP-E-1013187-9%3BP-E-1010984-3%3BP-E-1012960-C1%3BP-E-1009540-C1%3BP-E-1005647-4%3BP-E-1002779-3%3BP-R-1005895-2%3BP-R-1000786-2%3BP-R-116475-2%3BP-R-113175-4%3BP-R-113174-1%3BP-R-110379-1%3BP-R-107838-1%3BP-R-106524-1%3BP-R-101783-1%3BP-R-97577-1%3BP-R-97457-1%3BP-R-94390-1%3BP-R-94360-2%3BP-R-93416-1%3BP-R-93413-1%3BP-R-90963-2%3BP-R-85265-4%3BP-R-73296-2&bcnt=10", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		EXTRARES, 
		"Url=https://web.vortex.data.microsoft.com/collect/v1/t.gif?ver='2.1'&name='Ms.Cll.Javascript.EventTooLong'&time='2022-05-06T16%3A21%3A59.210Z'&os='Windows'&appId='JS%3Asupport.office.com'&*eventName='Ms.Webi.ContentUpdate'&*payloadLength=25891&*pageName='this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554'&*uri="
		"'https%3A%2F%2Fsupport.microsoft.com%2Fen-us%2Foffice%2Fthis-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554%3Fui%3Den-us%26rs%3Den-us%26ad%3Dus'&*market='en-US'&*impressionGuid='0cd7ddcb-fcc0-4970-a8e7-b39eee536a06'&*serverImpressionGuid='00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00'&ext-app-env='Production'&ext-javascript-ver='1.1'&ext-javascript-libVer='4.3.5'&ext-javascript-domain='support.microsoft.com'&ext-javascript-msfpc="
		"'GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165'&ext-javascript-userConsent=true&ext-user-localId='t%3A1B4F6F10E8CF6DE93F087E82ECCF6BE7'&$mscomCookies=false", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		LAST);

	web_add_cookie("ai_session=pMX+cQVNQGuDdC0dNaBlNp|1651853861584|1651854119536; DOMAIN=support.microsoft.com");

	web_add_header("Cache-Control", 
		"no-cache");

	web_custom_request("v1_2", 
		"URL=https://web.vortex.data.microsoft.com/collect/v1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"ver\":\"2.1\",\"name\":\"Ms.Webi.OutgoingRequest\",\"time\":\"2022-05-06T16:22:03.259Z\",\"appId\":\"JS:MeControl\",\"cV\":\"6PQTe0c5bcSrhWdv.7\",\"flags\":2097152,\"data\":{\"baseType\":\"Ms.Qos.OutgoingServiceRequest\",\"pageName\":\"Initial Collapsed\",\"impressionGuid\":\"9e611daf-1ae3-4507-d7e4-4687b1d041e1\",\"market\":\"en-US\",\"customData\":\"{\\\"computedDuration\\\":4251.199999999997,\\\"perfDuration\\\":4246.300000000003,\\\"metaTags\\\":{\\\"pgpart\\\":\\\"smcconvergence\\\"},"
		"\\\"config\\\":{\\\"ver\\\":\\\"10.22059.5\\\",\\\"mkt\\\":\\\"en-US\\\",\\\"ptn\\\":\\\"smcconvergence\\\",\\\"gfx\\\":\\\"https://amcdn.msftauth.net\\\",\\\"dbg\\\":false,\\\"aad\\\":true,\\\"int\\\":false,\\\"pxy\\\":true,\\\"msTxt\\\":false,\\\"rwd\\\":true,\\\"telEvs\\\":\\\"PageAction, PageView, ContentUpdate, OutgoingRequest, ClientError, PartnerApiCall, TrackedScenario\\\",\\\"instKey\\\":\\\"b8ffe739c47a401190627519795ca4d2-044a8309-9d4b-430b-9d47-6e87775cbab6-6888\\\",\\\"oneDSUrl\\\""
		":\\\"https://js.monitor.azure.com/scripts/c/ms.shared.analytics-3.1.11.min.js\\\",\\\"remAcc\\\":true,\\\"main\\\":\\\"meBoot\\\",\\\"wrapperId\\\":\\\"uhf\\\",\\\"cdnRegex\\\":\\\"^(?:https?:\\\\/\\\\/)?(mem\\\\.gfx\\\\.ms(?!\\\\.)|controls\\\\.account.microsoft?(?:-int|-dev)?(\\\\.com)?(:[0-9]{1,6})|amcdn\\\\.ms(?:ft)?auth\\\\.net(?!\\\\.))\\\",\\\"timeoutMs\\\":30000,\\\"graphv2\\\":true,\\\"graphinfo\\\":{\\\"graphclientid\\\":\\\"7eadcef8-456d-4611-9480-4fff72b8b9e2\\\",\\\"graphscope\\\":\\"
		"\"user.read\\\",\\\"graphcodeurl\\\":\\\"https://login.microsoftonline.com/common/oauth2/v2.0/authorize\\\",\\\"graphredirecturi\\\":\\\"https://amcdn.msftauth.net/me/callgraph\\\",\\\"graphphotourl\\\":\\\"https://graph.microsoft.com/v1.0/me/photos/96x96/$value\\\"},\\\"aadUrl\\\":\\\"https://myaccount.microsoft.com\\\",\\\"msaUrl\\\":\\\"https://account.microsoft.com/\\\"},\\\"url\\\":\\\"https://support.microsoft.com/en-us/office/"
		"this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=**&rs=**&ad=**\\\",\\\"accts\\\":\\\"0-0\\\"}\",\"baseData\":{\"operationName\":\"meCore.min.js\",\"dependencyOperationName\":\"DownloadScript\",\"dependencyName\":\"MeControl\",\"latencyMs\":4246,\"succeeded\":true,\"targetUri\":\"https://mem.gfx.ms/scripts/me/MeControl/10.22059.5/en-US/meCore.min.js\"}},\"ext\":{\"javascript\":{\"ver\":\"1.1\",\"libVer\":\"4.2.3\",\"domain\":\"support.microsoft.com\",\""
		"userConsent\":false},\"app\":{\"env\":\"Prod\"}}}\n{\"ver\":\"2.1\",\"name\":\"Ms.Webi.ContentUpdate\",\"time\":\"2022-05-06T16:21:58.966Z\",\"appId\":\"JS:MeControl\",\"cV\":\"6PQTe0c5bcSrhWdv.4\",\"flags\":2097152,\"data\":{\"baseType\":\"Ms.Content.ContentUpdate\",\"pageLoadTime\":9552,\"cookieEnabled\":true,\"isJs\":true,\"isLoggedIn\":false,\"isManual\":true,\"baseData\":{\"ver\":\"1.0\",\"impressionGuid\":\"9e611daf-1ae3-4507-d7e4-4687b1d041e1\",\"market\":\"en-US\",\"pageTags\":\"{\\\""
		"metaTags\\\":{\\\"pgpart\\\":\\\"smcconvergence\\\"},\\\"config\\\":{\\\"ver\\\":\\\"10.22059.5\\\",\\\"mkt\\\":\\\"en-US\\\",\\\"ptn\\\":\\\"smcconvergence\\\",\\\"gfx\\\":\\\"https://amcdn.msftauth.net\\\",\\\"dbg\\\":false,\\\"aad\\\":true,\\\"int\\\":false,\\\"pxy\\\":true,\\\"msTxt\\\":false,\\\"rwd\\\":true,\\\"telEvs\\\":\\\"PageAction, PageView, ContentUpdate, OutgoingRequest, ClientError, PartnerApiCall, TrackedScenario\\\",\\\"instKey\\\":\\\""
		"b8ffe739c47a401190627519795ca4d2-044a8309-9d4b-430b-9d47-6e87775cbab6-6888\\\",\\\"oneDSUrl\\\":\\\"https://js.monitor.azure.com/scripts/c/ms.shared.analytics-3.1.11.min.js\\\",\\\"remAcc\\\":true,\\\"main\\\":\\\"meBoot\\\",\\\"wrapperId\\\":\\\"uhf\\\",\\\"cdnRegex\\\":\\\"^(?:https?:\\\\/\\\\/)?(mem\\\\.gfx\\\\.ms(?!\\\\.)|controls\\\\.account.microsoft?(?:-int|-dev)?(\\\\.com)?(:[0-9]{1,6})|amcdn\\\\.ms(?:ft)?auth\\\\.net(?!\\\\.))\\\",\\\"timeoutMs\\\":30000,\\\"graphv2\\\":true,\\\""
		"graphinfo\\\":{\\\"graphclientid\\\":\\\"7eadcef8-456d-4611-9480-4fff72b8b9e2\\\",\\\"graphscope\\\":\\\"user.read\\\",\\\"graphcodeurl\\\":\\\"https://login.microsoftonline.com/common/oauth2/v2.0/authorize\\\",\\\"graphredirecturi\\\":\\\"https://amcdn.msftauth.net/me/callgraph\\\",\\\"graphphotourl\\\":\\\"https://graph.microsoft.com/v1.0/me/photos/96x96/$value\\\"},\\\"aadUrl\\\":\\\"https://myaccount.microsoft.com\\\",\\\"msaUrl\\\":\\\"https://account.microsoft.com/\\\"},\\\"url\\\":\\\"https"
		"://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=**&rs=**&ad=**\\\",\\\"accts\\\":\\\"0-0\\\"}\",\"contentVer\":\"2.0\",\"content\":\"[{\\\"id\\\":\\\"Initial Collapsed\\\",\\\"cS\\\":\\\"Application\\\"}]\"}},\"ext\":{\"javascript\":{\"ver\":\"1.1\",\"libVer\":\"4.2.3\",\"domain\":\"support.microsoft.com\",\"userConsent\":false},\"app\":{\"env\":\"Prod\"}}}\n{\"ver\":\"2.1\",\"name\":\"Ms.Webi.MeControl.PartnerApiCall\","
		"\"time\":\"2022-05-06T16:21:49.413Z\",\"appId\":\"JS:MeControl\",\"cV\":\"6PQTe0c5bcSrhWdv.2\",\"flags\":2097152,\"data\":{\"partner\":\"smcconvergence\",\"controlVersion\":\"10.22059.5\",\"methodName\":\"load\",\"parameters\":\"{\\\"containerId\\\":\\\"*string*\\\",\\\"enabled\\\":\\\"*boolean*\\\",\\\"headerHeight\\\":\\\"*number*\\\",\\\"debug\\\":\\\"*boolean*\\\",\\\"extensibleLinks\\\":{\\\"0\\\":{\\\"string\\\":\\\"*string*\\\",\\\"url\\\":\\\"*string*\\\",\\\"id\\\":\\\"*string*\\\"},\\\""
		"1\\\":{\\\"string\\\":\\\"*string*\\\",\\\"url\\\":\\\"*string*\\\",\\\"id\\\":\\\"*string*\\\"},\\\"2\\\":{\\\"string\\\":\\\"*string*\\\",\\\"url\\\":\\\"*string*\\\",\\\"id\\\":\\\"*string*\\\"},\\\"3\\\":{\\\"string\\\":\\\"*string*\\\",\\\"url\\\":\\\"*string*\\\",\\\"id\\\":\\\"*string*\\\"},\\\"4\\\":{\\\"string\\\":\\\"*string*\\\",\\\"url\\\":\\\"*string*\\\",\\\"id\\\":\\\"*string*\\\"},\\\"5\\\":{\\\"string\\\":\\\"*string*\\\",\\\"url\\\":\\\"*string*\\\",\\\"id\\\":\\\"*string*\\\"}},"
		"\\\"userData\\\":{\\\"idp\\\":\\\"msa\\\",\\\"firstName\\\":\\\"*string*\\\",\\\"lastName\\\":\\\"*string*\\\",\\\"memberName\\\":\\\"*string*\\\",\\\"cid\\\":\\\"*string*\\\",\\\"authenticatedState\\\":\\\"3\\\"},\\\"rpData\\\":{\\\"preferredIdp\\\":\\\"*string*\\\",\\\"msaInfo\\\":{\\\"signInUrl\\\":\\\"*string*\\\",\\\"signOutUrl\\\":\\\"*string*\\\",\\\"meUrl\\\":\\\"*string*\\\"},\\\"aadInfo\\\":{\\\"signOutUrl\\\":\\\"*string*\\\",\\\"appId\\\":\\\"*string*\\\",\\\"siteUrl\\\":\\\""
		"*string*\\\",\\\"blockMsaFed\\\":\\\"*boolean*\\\"}},\\\"events\\\":{\\\"onEventLog\\\":\\\"*function*\\\"},\\\"apiGeneration\\\":\\\"GEN2\\\",\\\"authProviderConfig\\\":{\\\"type\\\":\\\"webAadWithMsaFed\\\",\\\"appSignInUrl\\\":\\\"*string*\\\",\\\"appSignInToUrl\\\":\\\"*string*\\\",\\\"appSignOutUrl\\\":\\\"*string*\\\",\\\"appSwitchUrl\\\":\\\"*string*\\\",\\\"appSwitchToUrl\\\":\\\"*string*\\\"}}\"},\"ext\":{\"javascript\":{\"ver\":\"1.1\",\"libVer\":\"4.2.3\",\"domain\":\""
		"support.microsoft.com\",\"userConsent\":false},\"app\":{\"env\":\"Prod\"}}}", 
		EXTRARES, 
		"Url=https://support.microsoft.com/SocImages/m365logo.png", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		LAST);

	web_add_auto_header("cache-control", 
		"no-cache, no-store");

	web_custom_request("1.0_6", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.1.6&apikey=83328b3c5ab7488692991e7d63483cff-e640bd11-2392-49b1-b739-ed8e62bcb870-7240&upload-time=1651854121329&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=34670&w=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/x-json-stream", 
		"Body={\"name\":\"Ms.Web.PageViewPerformance\",\"time\":\"2022-05-06T16:21:59.055Z\",\"ver\":\"4.0\",\"iKey\":\"o:83328b3c5ab7488692991e7d63483cff\",\"ext\":{\"web\":{\"isManual\":false,\"domain\":\"support.microsoft.com\",\"userConsent\":true},\"sdk\":{\"ver\":\"1DS-Web-JS-3.1.6\",\"seq\":2,\"epoch\":\"842691854\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t"
		":1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"behavior\":{\"t\":6}}}},\"data\":{\"baseType\":\"PageviewPerformanceData\",\"baseData\":{\"ver\":\"1.0\",\"id\":\"8d5b4a14-cbe9-4324-97fc-a353f1a68c95\",\"name\":\"this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554\",\"uri\":"
		"\"https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us\",\"properties\":{\"pageTags\":{\"metaTags\":{\"schemaName\":\"HELP ARTICLE\",\"asst\":\"8f5fc675-cd47-414c-9535-12821ddfc554\",\"env\":\"Production\",\"contentlang\":\"en\",\"userFlightingId\":\"7c001c0c-e8ee-4fb5-bd34-d9f039843a01\",\"expid\":\"P-E-1013190-3-5;P-E-1013187-9-6;P-E-1010984-3-6;P-E-1012960-C1-5;P-E-1009540-C1-11;P-E-1005647-4-7;"
		"P-E-1002779-3-6;P-R-1005895-2-11;P-R-1000786-2-5;P-R-116475-2-8;P-R-113175-4-7;P-R-113174-1-2;P-R-110379-1-7;P-R-107838-1-4;P-R-106524-1-3;P-R-101783-1-2;P-R-97577-1-5;P-R-97457-1-10;P-R-94390-1-2;P-R-94360-2-18;P-R-93416-1-3;P-R-93413-1-2;P-R-90963-2-2;P-R-85265-4-8;P-R-73296-2-15\",\"origindatacenter\":\"Central US\",\"variationid\":\"ECS\",\"prdct\":\"office.com\",\"stv\":\"1.0.0-62f87f9ffa29a30037b2a05f13905cf8ce0d48fc\",\"serverImpressionGuid\":\""
		"00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00\",\"title\":\"This website doesn't work in Internet Explorer\",\"selfHelpExp\":\"railbanner_m365\",\"ms.lang\":\"en\",\"ms.loc\":\"US\",\"ms.ocpub.assetID\":\"8f5fc675-cd47-414c-9535-12821ddfc554\"}},\"version\":\"PostChannel=3.1.6;SystemPropertiesCollector=3.1.6;WebAnalyticsPlugin=3.1.6\"},\"duration\":\"00:00:39.997\",\"perfTotal\":\"00:00:39.997\",\"networkConnect\":\"00:00:00.014\",\"sentRequest\":\"00:00:00.000\",\"receivedResponse\":\""
		"00:00:00.000\",\"domProcessing\":\"00:00:39.983\"},\"behavior\":0}}", 
		LAST);

	web_custom_request("1.0_7", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.1.6&apikey=83328b3c5ab7488692991e7d63483cff-e640bd11-2392-49b1-b739-ed8e62bcb870-7240&upload-time=1651854120076&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=34670&w=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/x-json-stream", 
		"Body={\"name\":\"Ms.Web.ContentUpdate\",\"time\":\"2022-05-06T16:21:59.168Z\",\"ver\":\"4.0\",\"iKey\":\"o:83328b3c5ab7488692991e7d63483cff\",\"ext\":{\"web\":{\"isManual\":false,\"domain\":\"support.microsoft.com\",\"userConsent\":true},\"sdk\":{\"ver\":\"1DS-Web-JS-3.1.6\",\"seq\":3,\"epoch\":\"842691854\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t"
		":1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"baseData\":{\"f\":{\"behavior\":{\"t\":6},\"pageHeight\":{\"t\":6},\"vpHeight\":{\"t\":6},\"vpWidth\":{\"t\":6},\"vScrollOffset\":{\"t\":6},\"hScrollOffset\":{\"t\":6}}}}}},\"data\":{\"baseType\":\"ContentUpdateData\",\"baseData\":{\"name\":\""
		"this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554\",\"uri\":\"https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us\",\"market\":\"en-US\",\"pageType\":\"Article\",\"isLoggedIn\":false,\"id\":\"8d5b4a14-cbe9-4324-97fc-a353f1a68c95\",\"properties\":{\"pageTags\":{\"metaTags\":{\"schemaName\":\"HELP ARTICLE\",\"asst\":\"8f5fc675-cd47-414c-9535-12821ddfc554\",\"env\":\""
		"Production\",\"contentlang\":\"en\",\"userFlightingId\":\"7c001c0c-e8ee-4fb5-bd34-d9f039843a01\",\"expid\":\"P-E-1013190-3-5;P-E-1013187-9-6;P-E-1010984-3-6;P-E-1012960-C1-5;P-E-1009540-C1-11;P-E-1005647-4-7;P-E-1002779-3-6;P-R-1005895-2-11;P-R-1000786-2-5;P-R-116475-2-8;P-R-113175-4-7;P-R-113174-1-2;P-R-110379-1-7;P-R-107838-1-4;P-R-106524-1-3;P-R-101783-1-2;P-R-97577-1-5;P-R-97457-1-10;P-R-94390-1-2;P-R-94360-2-18;P-R-93416-1-3;P-R-93413-1-2;P-R-90963-2-2;P-R-85265-4-8;P-R-73296-2-15\",\""
		"origindatacenter\":\"Central US\",\"variationid\":\"ECS\",\"prdct\":\"office.com\",\"stv\":\"1.0.0-62f87f9ffa29a30037b2a05f13905cf8ce0d48fc\",\"serverImpressionGuid\":\"00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00\",\"title\":\"This website doesn't work in Internet Explorer\",\"selfHelpExp\":\"railbanner_m365\",\"ms.lang\":\"en\",\"ms.loc\":\"US\",\"ms.ocpub.assetID\":\"8f5fc675-cd47-414c-9535-12821ddfc554\"}},\"version\":\"PostChannel=3.1.6;SystemPropertiesCollector=3.1.6;"
		"WebAnalyticsPlugin=3.1.6\"},\"ver\":\"1.0\",\"behavior\":0,\"pageHeight\":1678,\"content\":\"[{\\\"cN\\\":\\\"headerArea\\\",\\\"cT\\\":\\\"Area_coreuiArea\\\",\\\"id\\\":\\\"a1Body\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"Body\\\"},{\\\"cN\\\":\\\"headerRegion\\\",\\\"cT\\\":\\\"Region_coreui-region\\\",\\\"id\\\":\\\"r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"a1\\\"},{\\\"cN\\\":\\\"headerUniversalHeader\\\",\\\"cT\\\":\\\"Module_coreui-universalheader\\\",\\\"id\\\":\\\"m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\""
		"r1a1\\\"},{\\\"cN\\\":\\\"Universal Header_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Logo_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Support_nav\\\",\\\"id\\\":\\\"n6c3m1r1a1\\\",\\\"sN\\\":6,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"Category nav_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c8c3m1r1a1\\\",\\\""
		"sN\\\":8,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Microsoft 365_nav\\\",\\\"id\\\":\\\"n2c8c3m1r1a1\\\",\\\"sN\\\":2,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Office_nav\\\",\\\"id\\\":\\\"n3c8c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Windows_nav\\\",\\\"id\\\":\\\"n4c8c3m1r1a1\\\",\\\"sN\\\":4,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Surface_nav\\\",\\\"id\\\":\\\"n5c8c3m1r1a1\\\",\\\"sN\\\":5,\\\"aN\\\":\\\"c8c3m1r1a1\\\"}"
		",{\\\"cN\\\":\\\"CatNav_Xbox_nav\\\",\\\"id\\\":\\\"n6c8c3m1r1a1\\\",\\\"sN\\\":6,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_Deals_nav\\\",\\\"id\\\":\\\"n7c8c3m1r1a1\\\",\\\"sN\\\":7,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"CatNav_cta_Buy Microsoft 365_nav\\\",\\\"id\\\":\\\"n9c8c3m1r1a1\\\",\\\"sN\\\":9,\\\"aN\\\":\\\"c8c3m1r1a1\\\"},{\\\"cN\\\":\\\"Header actions_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c9c3m1r1a1\\\",\\\"sN\\\":9,\\\"aN\\\":\\\"c3m1r1a1\\\"},{\\\""
		"cN\\\":\\\"GlobalNav_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c1c9c3m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_More_nonnav\\\",\\\"id\\\":\\\"nn1c1c9c3m1r1a1\\\",\\\"sN\\\":1,\\\"aN\\\":\\\"c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Search_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c3c1c9c3m1r1a1\\\",\\\"sN\\\":3,\\\"aN\\\":\\\"c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"Search_nav\\\",\\\"id\\\":\\\"n2c3c1c9c3m1r1a1\\\",\\\"sN\\\":2,\\\"aN\\\""
		":\\\"c3c1c9c3m1r1a1\\\"},{\\\"cN\\\":\\\"GlobalNav_Account_cont\\\",\\\"cT\\\":\\\"Container\\\",\\\"id\\\":\\\"c5c1c9c3m1r1a1\\\",\\\"sN\\\":5,\\\"aN\\\":\\\"c1c9c3m1r1a1\\\"},{\\\"contentId\\\":\\\"topNav\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"contentName\\\":\\\"\\\\r\\\\nOffice support\\\\r\\\\n\\\\r\\\\n \\\\r\\\\nProducts  \\\\r\\\\n\\\\r\\\\nMicrosoft 365\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nOffice\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nOutlook\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nMicrosoft "
		"Teams\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nOneDrive\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nOneNote\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nWindows\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nMicrosoft Edge\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nmore ...\\\\r\\\\n\\\\r\\\\n\\\\r\\\\n \\\\r\\\\nDevices  \\\\r\\\\n\\\\r\\\\nSurface\\\\r\\\"},{\\\"contentId\\\":\\\"MNU_OFFICE\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"100\\\",\\\"contentName\\\":\\\"MNU_OFFICE\\\"},{\\\"contentId\\\":\\\"SUBMNU_PRODUCTS\\\",\\\"areaName\\\":\\\"topnav\\\""
		",\\\"slotNumber\\\":\\\"200\\\",\\\"contentName\\\":\\\"SUBMNU_PRODUCTS\\\",\\\"bhvr\\\":\\\"EXPAND\\\"},{\\\"contentId\\\":\\\"SUBMNU_DEVICES\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"300\\\",\\\"contentName\\\":\\\"SUBMNU_DEVICES\\\",\\\"bhvr\\\":\\\"EXPAND\\\"},{\\\"contentId\\\":\\\"LNK_WHATSNEW_HUB\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"400\\\",\\\"contentName\\\":\\\"LNK_WHATSNEW_HUB\\\"},{\\\"contentId\\\":\\\"LNK_INSTALL_OFFICE\\\",\\\"areaName\\\":\\\""
		"topnav\\\",\\\"slotNumber\\\":\\\"500\\\",\\\"contentName\\\":\\\"LNK_INSTALL_OFFICE\\\"},{\\\"contentId\\\":\\\"SUBMNU_ACCOUNT_AND_BILLING\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"600\\\",\\\"contentName\\\":\\\"SUBMNU_ACCOUNT_AND_BILLING\\\",\\\"bhvr\\\":\\\"EXPAND\\\"},{\\\"contentId\\\":\\\"LNK_OFFICE_TEMPLATES\\\",\\\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"700\\\",\\\"contentName\\\":\\\"LNK_OFFICE_TEMPLATES\\\"},{\\\"contentId\\\":\\\"SUBMNU_MORE_SUPPORT\\\",\\"
		"\"areaName\\\":\\\"topnav\\\",\\\"slotNumber\\\":\\\"800\\\",\\\"contentName\\\":\\\"SUBMNU_MORE_SUPPORT\\\",\\\"bhvr\\\":\\\"EXPAND\\\"},{\\\"contentId\\\":\\\"supArticleContent\\\",\\\"areaName\\\":\\\"content\\\",\\\"contentName\\\":\\\"\\\\r\\\\nThis website doesn't work in Internet Explorer\\\\r\\\\n\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nThe website you were trying to open doesn't work in Internet Explorer, so you've been redirected to Microsoft Edge.\\\\r\\\\n\\\\r\\\\n\\\\r\\\\nInternet Explorer is "
		"re\\\"},{\\\"areaName\\\":\\\"share\\\",\\\"contentName\\\":\\\"      \\\"},{\\\"contentId\\\":\\\"ocFacebookButton\\\",\\\"areaName\\\":\\\"share\\\",\\\"slotNumber\\\":\\\"1\\\",\\\"contentName\\\":\\\"facebook\\\",\\\"bhvr\\\":\\\"SOCIALSHARE\\\"},{\\\"contentId\\\":\\\"ocLinkedInButton\\\",\\\"areaName\\\":\\\"share\\\",\\\"slotNumber\\\":\\\"2\\\",\\\"contentName\\\":\\\"linkedIn\\\",\\\"bhvr\\\":\\\"SOCIALSHARE\\\"},{\\\"contentId\\\":\\\"ocEmailButton\\\",\\\"areaName\\\":\\\"share\\\",\\\""
		"slotNumber\\\":\\\"3\\\",\\\"contentName\\\":\\\"email\\\",\\\"bhvr\\\":\\\"SOCIALSHARE\\\"}]\",\"contentVer\":\"2.0\",\"vpHeight\":911,\"vpWidth\":2560,\"vScrollOffset\":0,\"hScrollOffset\":0},\"cookieEnabled\":true,\"isDomComplete\":true}}", 
		LAST);

	web_revert_auto_header("cache-control");

	web_add_auto_header("Cache-Control", 
		"no-cache");

	web_custom_request("1.0_8", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.0.2&apikey=05eaeec884e14734aa4aa95e87c73bac-0f0d742b-73a2-40ff-918f-8d763a8b3544-7098&upload-time=1651854132996&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=12403&w=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"name\":\"Ms.Web.PageViewPerformance\",\"time\":\"2022-05-06T16:21:59.532Z\",\"ver\":\"4.0\",\"iKey\":\"o:05eaeec884e14734aa4aa95e87c73bac\",\"ext\":{\"web\":{\"isManual\":false,\"domain\":\"support.microsoft.com\",\"browser\":\"MSIE\",\"browserVer\":\"11.0\",\"screenRes\":\"1920X1080\",\"userConsent\":true},\"sdk\":{\"ver\":\"1DS-Web-JS-3.0.2\",\"seq\":1,\"epoch\":\"1651854109726\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\","
		"\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t:1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"os\":{\"name\":\"Windows\",\"ver\":\"10\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"behavior\":{\"t\":6}}}},\"data\":{\"baseType\":\"PageviewPerformanceData\",\"baseData\":{\"ver\":\"1.0\",\"id\":\"3e00fb43-7160-44d4-a7c0-2307ba08f1cb"
		"\",\"name\":\"this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554\",\"uri\":\"https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us\",\"properties\":{\"pageTags\":{\"metaTags\":{\"schemaName\":\"HELP ARTICLE\",\"asst\":\"8f5fc675-cd47-414c-9535-12821ddfc554\",\"env\":\"Production\",\"contentlang\":\"en\",\"userFlightingId\":\"7c001c0c-e8ee-4fb5-bd34-d9f039843a01\",\""
		"expid\":\"P-E-1013190-3-5;P-E-1013187-9-6;P-E-1010984-3-6;P-E-1012960-C1-5;P-E-1009540-C1-11;P-E-1005647-4-7;P-E-1002779-3-6;P-R-1005895-2-11;P-R-1000786-2-5;P-R-116475-2-8;P-R-113175-4-7;P-R-113174-1-2;P-R-110379-1-7;P-R-107838-1-4;P-R-106524-1-3;P-R-101783-1-2;P-R-97577-1-5;P-R-97457-1-10;P-R-94390-1-2;P-R-94360-2-18;P-R-93416-1-3;P-R-93413-1-2;P-R-90963-2-2;P-R-85265-4-8;P-R-73296-2-15\",\"origindatacenter\":\"Central US\",\"variationid\":\"ECS\",\"prdct\":\"office.com\",\"stv\":\""
		"1.0.0-62f87f9ffa29a30037b2a05f13905cf8ce0d48fc\",\"serverImpressionGuid\":\"00-285ba911a0e88e2dc1716b68c7aa9c18-9ead5797c7789b5c-00\",\"title\":\"This website doesn't work in Internet Explorer\",\"selfHelpExp\":\"railbanner_m365\",\"ms.lang\":\"en\",\"ms.loc\":\"US\",\"ms.ocpub.assetID\":\"8f5fc675-cd47-414c-9535-12821ddfc554\"}},\"version\":\"PostChannel=3.0.2;SystemPropertiesCollector=3.0.2;WebAnalyticsPlugin=3.0.2\"},\"duration\":\"00:00:39.997\",\"perfTotal\":\"00:00:39.997\",\"networkConnect"
		"\":\"00:00:00.000\",\"sentRequest\":\"00:00:00.000\",\"receivedResponse\":\"00:00:00.000\",\"domProcessing\":\"00:00:39.983\"},\"behavior\":0}}", 
		LAST);

	web_custom_request("1.0_9", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.0.2&apikey=05eaeec884e14734aa4aa95e87c73bac-0f0d742b-73a2-40ff-918f-8d763a8b3544-7098&upload-time=1651854138891&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=12403&w=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"name\":\"Microsoft.UniversalCreativeService.OutgoingServiceRequest\",\"time\":\"2022-05-06T16:22:16.866Z\",\"ver\":\"4.0\",\"iKey\":\"o:05eaeec884e14734aa4aa95e87c73bac\",\"ext\":{\"sdk\":{\"ver\":\"1DS-Web-JS-3.0.2\",\"seq\":3,\"epoch\":\"1651854109726\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t:1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\""
		"web\":{\"domain\":\"support.microsoft.com\",\"browser\":\"MSIE\",\"browserVer\":\"11.0\",\"screenRes\":\"1920X1080\",\"userConsent\":true},\"os\":{\"name\":\"Windows\",\"ver\":\"10\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"latencyMs\":{\"t\":6}}}},\"data\":{\"baseType\":\"RequestData\",\"baseData\":{\"properties\":{\"version\":\"PostChannel=3.0.2;"
		"SystemPropertiesCollector=3.0.2;WebAnalyticsPlugin=3.0.2\"}},\"partnerName\":\"SMC\",\"latencyMs\":27117.1,\"succeeded\":true,\"requestMethod\":\"GET\",\"protocolStatusCode\":\"200\",\"target\":\"https://arc.msn.com/v4/api/selection?SCS_promotionCategory=uhfbuybutton%3Brailbanner_m365&articleType=railbanner_m365&authType=None&country=us&locale=en-us&muid=1B4F6F10E8CF6DE93F087E82ECCF6BE7&operatingSystem=Windows10&placement=88000534&scs_ecsFlightId="
		"P-E-1013190-3%3BP-E-1013187-9%3BP-E-1010984-3%3BP-E-1012960-C1%3BP-E-1009540-C1%3BP-E-1005647-4%3BP-E-1002779-3%3BP-R-1005895-2%3BP-R-1000786-2%3BP-R-116475-2%3BP-R-113175-4%3BP-R-113174-1%3BP-R-110379-1%3BP-R-107838-1%3BP-R-106524-1%3BP-R-101783-1%3BP-R-97577-1%3BP-R-97457-1%3BP-R-94390-1%3BP-R-94360-2%3BP-R-93416-1%3BP-R-93413-1%3BP-R-90963-2%3BP-R-85265-4%3BP-R-73296-2&bcnt=10\",\"operationName\":\"SMC\",\"dependencyName\":\"Iris\",\"dependencyOperationName\":\"fetchIrisAttributes\"}}\n{\"name"
		"\":\"Microsoft.UniversalCreativeService.OutgoingRequestDuration\",\"time\":\"2022-05-06T16:22:16.900Z\",\"ver\":\"4.0\",\"iKey\":\"o:05eaeec884e14734aa4aa95e87c73bac\",\"ext\":{\"sdk\":{\"ver\":\"1DS-Web-JS-3.0.2\",\"seq\":4,\"epoch\":\"1651854109726\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t:1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"web\":{\"domain\""
		":\"support.microsoft.com\",\"browser\":\"MSIE\",\"browserVer\":\"11.0\",\"screenRes\":\"1920X1080\",\"userConsent\":true},\"os\":{\"name\":\"Windows\",\"ver\":\"10\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"duration\":{\"t\":6}}}},\"data\":{\"baseData\":{\"properties\":{\"version\":\"PostChannel=3.0.2;SystemPropertiesCollector=3.0.2;WebAnalyticsPlugin="
		"3.0.2\"}},\"partnerName\":\"SMC\",\"duration\":27154.600000000002,\"target\":\"https://arc.msn.com/v4/api/selection?SCS_promotionCategory=uhfbuybutton%3Brailbanner_m365&articleType=railbanner_m365&authType=None&country=us&locale=en-us&muid=1B4F6F10E8CF6DE93F087E82ECCF6BE7&operatingSystem=Windows10&placement=88000534&scs_ecsFlightId="
		"P-E-1013190-3%3BP-E-1013187-9%3BP-E-1010984-3%3BP-E-1012960-C1%3BP-E-1009540-C1%3BP-E-1005647-4%3BP-E-1002779-3%3BP-R-1005895-2%3BP-R-1000786-2%3BP-R-116475-2%3BP-R-113175-4%3BP-R-113174-1%3BP-R-110379-1%3BP-R-107838-1%3BP-R-106524-1%3BP-R-101783-1%3BP-R-97577-1%3BP-R-97457-1%3BP-R-94390-1%3BP-R-94360-2%3BP-R-93416-1%3BP-R-93413-1%3BP-R-90963-2%3BP-R-85265-4%3BP-R-73296-2&bcnt=10\"}}\n{\"name\":\"Microsoft.UniversalCreativeService.RenderDuration\",\"time\":\"2022-05-06T16:22:16.982Z\",\"ver\":\""
		"4.0\",\"iKey\":\"o:05eaeec884e14734aa4aa95e87c73bac\",\"ext\":{\"sdk\":{\"ver\":\"1DS-Web-JS-3.0.2\",\"seq\":5,\"epoch\":\"1651854109726\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t:1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"web\":{\"domain\":\"support.microsoft.com\",\"browser\":\"MSIE\",\"browserVer\":\"11.0\",\"screenRes\":\"1920X1080\",\"userConsent"
		"\":true},\"os\":{\"name\":\"Windows\",\"ver\":\"10\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"duration\":{\"t\":6}}}},\"data\":{\"baseData\":{\"properties\":{\"version\":\"PostChannel=3.0.2;SystemPropertiesCollector=3.0.2;WebAnalyticsPlugin=3.0.2\"}},\"partnerName\":\"SMC\",\"duration\":27286.8}}\n{\"name\":\""
		"Microsoft.UniversalCreativeService.CreativeRendered\",\"time\":\"2022-05-06T16:22:17.414Z\",\"ver\":\"4.0\",\"iKey\":\"o:05eaeec884e14734aa4aa95e87c73bac\",\"ext\":{\"sdk\":{\"ver\":\"1DS-Web-JS-3.0.2\",\"seq\":6,\"epoch\":\"1651854109726\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t:1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"web\":{\"domain\":\""
		"support.microsoft.com\",\"browser\":\"MSIE\",\"browserVer\":\"11.0\",\"screenRes\":\"1920X1080\",\"userConsent\":true},\"os\":{\"name\":\"Windows\",\"ver\":\"10\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"count\":{\"t\":6}}}},\"data\":{\"baseData\":{\"properties\":{\"version\":\"PostChannel=3.0.2;SystemPropertiesCollector=3.0.2;WebAnalyticsPlugin=3.0.2\"}}"
		",\"partnerName\":\"SMC\",\"count\":2,\"url\":\"https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us\",\"template\":\"[{\\\\\"bannerAttributes\\\\\":{\\\\\"title\\\\\":\\\\\"You\\xE2\\x80\\x99re invited to try Microsoft 365 for free\\\\\",\\\\\"ctaText\\\\\":\\\\\"Unlock now\\\\\",\\\\\"ctaLink\\\\\":\\\\\"https://www.microsoft.com/microsoft-365/try?ocid="
		"oo_support_mix_marvel_ups_support_railbanner_1000852_try\\\\\",\\\\\"dataScenario\\\\\":\\\\\"M365Promo\\\\\",\\\\\"templateRef\\\\\":\\\\\"RailTransparentBackground\\\\\",\\\\\"injectorClass\\\\\":\\\\\"ucsRailContainer\\\\\",\\\\\"creativeClass\\\\\":\\\\\"railbanner_m365\\\\\",\\\\\"campaignId\\\\\":\\\\\"oo_support_mix_marvel_ups_support_railbanner_1000852_try\\\\\",\\\\\"isEmptyControl\\\\\":\\\\\"false\\\\\"},\\\\\"actionBeacon\\\\\":\\\\\"https://ris.api.iris.microsoft.com/v1/a/{ACTION}?PG="
		"IRIS000001.0000000534&UNID=88000534&CID=128000000003336929&PID=425434348&TargetID=700387601&REQASID=3325CD259D394AB9AF0DE16700E7741A&ASID=9eb1e11b979f4db6b8097d8f7f2f023d&REQT=20220506T162216&UIT=G&ID=1B4F6F10E8CF6DE93F087E82ECCF6BE7&region=US&SLOT=1&RV=&RS=&ER_AC=&&DS_EVTID=9eb1e11b979f4db6b8097d8f7f2f023d&WFIDS=&DEVOSVER=&APP=&ARCRAS=&CLR=&lang=&oem=&devFam=&ossku=&cmdVer=&mo=&cap=&bSrc=i.m\\\\\",\\\\\"impressionBeacon\\\\\":\\\\\"https://arc.msn.com/v3/Delivery/Events/Impression?PID=425434348&"
		"TID=700387601&CID=128000000003336929&BID=1553385041&PG=IRIS000001.0000000534&TPID=425434348&REQASID=3325CD259D394AB9AF0DE16700E7741A&ASID=9eb1e11b979f4db6b8097d8f7f2f023d&SLOT=1&REQT=20220506T162216&MA_Score=2&&DS_EVTID=9eb1e11b979f4db6b8097d8f7f2f023d&BCNT=10&PG=IRIS000001.0000000534&UNID=88000534&MAP_TID=184D99EC-7348-4514-B5D5-38ADCBB14FA3&ASID=3325CD259D394AB9AF0DE16700E7741A&REQASID=3325CD259D394AB9AF0DE16700E7741A&ARC=1&EMS=1&LOCALE=EN-US&COUNTRY=US&HTD=-1&LANG=1033&DEVLANG=EN&CIP="
		"198.208.47.78&ID=1B4F6F10E8CF6DE93F087E82ECCF6BE7&OPTOUTSTATE=0&HTTPS=1&MARKETBASEDCOUNTRY=US&CFMT=&H=0&W=0&FESVER=1.3&SCS_PROMOTIONCATEGORY=UHFBUYBUTTON;RAILBANNER_M365&ARTICLETYPE=RAILBANNER_M365&AUTHTYPE=NONE&OPERATINGSYSTEM=WINDOWS10&SCS_ECSFLIGHTID=P-E-1013190-3;P-E-1013187-9;P-E-1010984-3;P-E-1012960-C1;P-E-1009540-C1;P-E-1005647-4;P-E-1002779-3;P-R-1005895-2;P-R-1000786-2;P-R-116475-2;P-R-113175-4;P-R-113174-1;P-R-110379-1;P-R-107838-1;P-R-106524-1;P-R-101783-1;P-R-97577-1;P-R-97457-1;"
		"P-R-94390-1;P-R-94360-2;P-R-93416-1;P-R-93413-1;P-R-90963-2;P-R-85265-4;P-R-73296-2&CHNL=CFD&UIT=G\\\\\"},{\\\\\"bannerAttributes\\\\\":{\\\\\"title\\\\\":\\\\\"Buy Microsoft 365\\\\\",\\\\\"ctaText\\\\\":\\\\\"Buy Microsoft 365\\\\\",\\\\\"ctaLink\\\\\":\\\\\"https://go.microsoft.com/fwlink/?linkid=849747\\\\\",\\\\\"dataScenario\\\\\":\\\\\"M365Promo\\\\\",\\\\\"templateRef\\\\\":\\\\\"UhfBuyButton\\\\\",\\\\\"injectorClass\\\\\":\\\\\"UhfBuyButton\\\\\",\\\\\"isEmptyControl\\\\\":\\\\\""
		"false\\\\\",\\\\\"overrideContentSelector\\\\\":\\\\\"#c-uhf-nav-cta\\\\\"},\\\\\"actionBeacon\\\\\":\\\\\"https://ris.api.iris.microsoft.com/v1/a/{ACTION}?PG=IRIS000001.0000000534&UNID=88000534&CID=128000000003143149&PID=425495252&TargetID=700378344&REQASID=3325CD259D394AB9AF0DE16700E7741A&ASID=e885c0becf8a4268ae65e6bdaf37315a&REQT=20220506T162216&UIT=G&ID=1B4F6F10E8CF6DE93F087E82ECCF6BE7&region=US&SLOT=2&RV=&RS=&ER_AC=&&DS_EVTID=e885c0becf8a4268ae65e6bdaf37315a&WFIDS=&DEVOSVER=&APP=&ARCRAS=&CLR="
		"&lang=&oem=&devFam=&ossku=&cmdVer=&mo=&cap=&bSrc=i.m\\\\\",\\\\\"impressionBeacon\\\\\":\\\\\"https://arc.msn.com/v3/Delivery/Events/Impression?PID=425495252&TID=700378344&CID=128000000003143149&BID=2125270574&PG=IRIS000001.0000000534&TPID=425495252&REQASID=3325CD259D394AB9AF0DE16700E7741A&ASID=e885c0becf8a4268ae65e6bdaf37315a&SLOT=2&REQT=20220506T162216&MA_Score=2&&DS_EVTID=e885c0becf8a4268ae65e6bdaf37315a&BCNT=10&PG=IRIS000001.0000000534&UNID=88000534&MAP_TID=184D99EC-7348-4514-B5D5-38ADCBB14FA3"
		"&ASID=3325CD259D394AB9AF0DE16700E7741A&REQASID=3325CD259D394AB9AF0DE16700E7741A&ARC=1&EMS=1&LOCALE=EN-US&COUNTRY=US&HTD=-1&LANG=1033&DEVLANG=EN&CIP=198.208.47.78&ID=1B4F6F10E8CF6DE93F087E82ECCF6BE7&OPTOUTSTATE=0&HTTPS=1&MARKETBASEDCOUNTRY=US&CFMT=&H=0&W=0&FESVER=1.3&SCS_PROMOTIONCATEGORY=UHFBUYBUTTON;RAILBANNER_M365&ARTICLETYPE=RAILBANNER_M365&AUTHTYPE=NONE&OPERATINGSYSTEM=WINDOWS10&SCS_ECSFLIGHTID=P-E-1013190-3;P-E-1013187-9;P-E-1010984-3;P-E-1012960-C1;P-E-1009540-C1;P-E-1005647-4;P-E-1002779-3;"
		"P-R-1005895-2;P-R-1000786-2;P-R-116475-2;P-R-113175-4;P-R-113174-1;P-R-110379-1;P-R-107838-1;P-R-106524-1;P-R-101783-1;P-R-97577-1;P-R-97457-1;P-R-94390-1;P-R-94360-2;P-R-93416-1;P-R-93413-1;P-R-90963-2;P-R-85265-4;P-R-73296-2&CHNL=CFD&UIT=G\\\\\"}]\"}}\n{\"name\":\"Microsoft.UniversalCreativeService.RenderDuration\",\"time\":\"2022-05-06T16:22:17.428Z\",\"ver\":\"4.0\",\"iKey\":\"o:05eaeec884e14734aa4aa95e87c73bac\",\"ext\":{\"sdk\":{\"ver\":\"1DS-Web-JS-3.0.2\",\"seq\":7,\"epoch\":\""
		"1651854109726\",\"installId\":\"4a4ab793-d2bf-4d47-9502-8b10e229d375\"},\"app\":{\"locale\":\"en-US\",\"env\":\"Production\",\"sesId\":\"pMX+cQVNQGuDdC0dNaBlNp\"},\"user\":{\"localId\":\"t:1B4F6F10E8CF6DE93F087E82ECCF6BE7\",\"locale\":\"en-US\"},\"web\":{\"domain\":\"support.microsoft.com\",\"browser\":\"MSIE\",\"browserVer\":\"11.0\",\"screenRes\":\"1920X1080\",\"userConsent\":true},\"os\":{\"name\":\"Windows\",\"ver\":\"10\"},\"intweb\":{\"msfpc\":\"GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH="
		"2c4f&LV=202204&V=4&LU=1651007629165\"},\"utc\":{\"popSample\":100},\"loc\":{\"tz\":\"-05:00\"},\"metadata\":{\"f\":{\"duration\":{\"t\":6}}}},\"data\":{\"baseData\":{\"properties\":{\"version\":\"PostChannel=3.0.2;SystemPropertiesCollector=3.0.2;WebAnalyticsPlugin=3.0.2\"}},\"partnerName\":\"SMC\",\"duration\":27733.8}}", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_cookie("SRM_I=1B4F6F10E8CF6DE93F087E82ECCF6BE7; DOMAIN=c1.microsoft.com");

	web_add_cookie("MS0=1084243eb7354f618e147c20afcbf09e; DOMAIN=c1.microsoft.com");

	web_add_cookie("ak_bmsc=78EF817703F68557FB53AA9D4B9BA580~000000000000000000000000000000~YAAQENvAF2z25Y2AAQAAYwMpmg/i1qCdyKXlYzpDZftM1GvvIw4JiLZYoXtlWUrTrY7wsg1daNQlO+Ie6AHrCt65zvmgUD1lnPCAr7yE/VlQ+OoXU3vh/iozN0s16hn6v5FcBfPUysgzX8QEJhSj5HqdciWn2jVSW3dbLSTsEIvPFk7tWfIUVvOOR3chJdhkXf9kr2CnovgbxnOlpiJODsdgZKheggM5lX7gfX89gFUAkkgsrDGqOYmgWV629pCH1CeeewqnkQSj2x2J10RApsYE8w9yv5bf97NF0EaaAQec+Byz2aDpnisFUfuuwS4TEFrTWn8WpJMxCs5NVQX5NTmqVIr7G+7mA0Sp5KMkqZX44+1S+rOLcb/OAwMOnA==; DOMAIN=c1.microsoft.com");

	web_add_cookie("MSCC=NR; DOMAIN=c1.microsoft.com");

	web_add_cookie("MC1=GUID=2c4fca1a1cd44e9a868490bbcb46a50e&HASH=2c4f&LV=202204&V=4&LU=1651007629165; DOMAIN=c1.microsoft.com");

	web_add_cookie("MUID=1B4F6F10E8CF6DE93F087E82ECCF6BE7; DOMAIN=c1.microsoft.com");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Access-Control-Request-Headers", 
		"cache-control, content-type");

	web_custom_request("1.0_10", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.1.6&apikey=83328b3c5ab7488692991e7d63483cff-e640bd11-2392-49b1-b739-ed8e62bcb870-7240&upload-time=1651854141023&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=34670&w=0", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://c1.microsoft.com/c.gif?DI=4050&did=1&t=&ctsa=mr&CtsSyncId=A5F79733CE6C47A0A6E258DD2D4D0E5C&MUID=1B4F6F10E8CF6DE93F087E82ECCF6BE7", "Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", ENDITEM, 
		LAST);

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_auto_header("Access-Control-Request-Method", 
		"GET");

	web_custom_request("Impression", 
		"URL=https://arc.msn.com/v3/Delivery/Events/Impression?PID=425434348&TID=700387601&CID=128000000003336929&BID=1553385041&PG=IRIS000001.0000000534&TPID=425434348&REQASID=3325CD259D394AB9AF0DE16700E7741A&ASID=9eb1e11b979f4db6b8097d8f7f2f023d&SLOT=1&REQT=20220506T162216&MA_Score=2&&DS_EVTID=9eb1e11b979f4db6b8097d8f7f2f023d&BCNT=10&PG=IRIS000001.0000000534&UNID=88000534&MAP_TID=184D99EC-7348-4514-B5D5-38ADCBB14FA3&ASID=3325CD259D394AB9AF0DE16700E7741A&REQASID=3325CD259D394AB9AF0DE16700E7741A&ARC=1&EMS="
		"1&LOCALE=EN-US&COUNTRY=US&HTD=-1&LANG=1033&DEVLANG=EN&CIP=198.208.47.78&ID=1B4F6F10E8CF6DE93F087E82ECCF6BE7&OPTOUTSTATE=0&HTTPS=1&MARKETBASEDCOUNTRY=US&CFMT=&H=0&W=0&FESVER=1.3&SCS_PROMOTIONCATEGORY=UHFBUYBUTTON;RAILBANNER_M365&ARTICLETYPE=RAILBANNER_M365&AUTHTYPE=NONE&OPERATINGSYSTEM=WINDOWS10&SCS_ECSFLIGHTID=P-E-1013190-3;P-E-1013187-9;P-E-1010984-3;P-E-1012960-C1;P-E-1009540-C1;P-E-1005647-4;P-E-1002779-3;P-R-1005895-2;P-R-1000786-2;P-R-116475-2;P-R-113175-4;P-R-113174-1;P-R-110379-1;"
		"P-R-107838-1;P-R-106524-1;P-R-101783-1;P-R-97577-1;P-R-97457-1;P-R-94390-1;P-R-94360-2;P-R-93416-1;P-R-93413-1;P-R-90963-2;P-R-85265-4;P-R-73296-2&CHNL=CFD&UIT=G", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("Impression_2", 
		"URL=https://arc.msn.com/v3/Delivery/Events/Impression?PID=425495252&TID=700378344&CID=128000000003143149&BID=2125270574&PG=IRIS000001.0000000534&TPID=425495252&REQASID=3325CD259D394AB9AF0DE16700E7741A&ASID=e885c0becf8a4268ae65e6bdaf37315a&SLOT=2&REQT=20220506T162216&MA_Score=2&&DS_EVTID=e885c0becf8a4268ae65e6bdaf37315a&BCNT=10&PG=IRIS000001.0000000534&UNID=88000534&MAP_TID=184D99EC-7348-4514-B5D5-38ADCBB14FA3&ASID=3325CD259D394AB9AF0DE16700E7741A&REQASID=3325CD259D394AB9AF0DE16700E7741A&ARC=1&EMS="
		"1&LOCALE=EN-US&COUNTRY=US&HTD=-1&LANG=1033&DEVLANG=EN&CIP=198.208.47.78&ID=1B4F6F10E8CF6DE93F087E82ECCF6BE7&OPTOUTSTATE=0&HTTPS=1&MARKETBASEDCOUNTRY=US&CFMT=&H=0&W=0&FESVER=1.3&SCS_PROMOTIONCATEGORY=UHFBUYBUTTON;RAILBANNER_M365&ARTICLETYPE=RAILBANNER_M365&AUTHTYPE=NONE&OPERATINGSYSTEM=WINDOWS10&SCS_ECSFLIGHTID=P-E-1013190-3;P-E-1013187-9;P-E-1010984-3;P-E-1012960-C1;P-E-1009540-C1;P-E-1005647-4;P-E-1002779-3;P-R-1005895-2;P-R-1000786-2;P-R-116475-2;P-R-113175-4;P-R-113174-1;P-R-110379-1;"
		"P-R-107838-1;P-R-106524-1;P-R-101783-1;P-R-97577-1;P-R-97457-1;P-R-94390-1;P-R-94360-2;P-R-93416-1;P-R-93413-1;P-R-90963-2;P-R-85265-4;P-R-73296-2&CHNL=CFD&UIT=G", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");

	web_revert_auto_header("Access-Control-Request-Method");

	web_revert_auto_header("Cache-Control");

	web_add_auto_header("Accept-Language", 
		"en-US");

	web_add_auto_header("Content-Type", 
		"application/json");

	web_custom_request("Impression_3", 
		"URL=https://arc.msn.com/v3/Delivery/Events/Impression?PID=425495252&TID=700378344&CID=128000000003143149&BID=2125270574&PG=IRIS000001.0000000534&TPID=425495252&REQASID=3325CD259D394AB9AF0DE16700E7741A&ASID=e885c0becf8a4268ae65e6bdaf37315a&SLOT=2&REQT=20220506T162216&MA_Score=2&&DS_EVTID=e885c0becf8a4268ae65e6bdaf37315a&BCNT=10&PG=IRIS000001.0000000534&UNID=88000534&MAP_TID=184D99EC-7348-4514-B5D5-38ADCBB14FA3&ASID=3325CD259D394AB9AF0DE16700E7741A&REQASID=3325CD259D394AB9AF0DE16700E7741A&ARC=1&EMS="
		"1&LOCALE=EN-US&COUNTRY=US&HTD=-1&LANG=1033&DEVLANG=EN&CIP=198.208.47.78&ID=1B4F6F10E8CF6DE93F087E82ECCF6BE7&OPTOUTSTATE=0&HTTPS=1&MARKETBASEDCOUNTRY=US&CFMT=&H=0&W=0&FESVER=1.3&SCS_PROMOTIONCATEGORY=UHFBUYBUTTON;RAILBANNER_M365&ARTICLETYPE=RAILBANNER_M365&AUTHTYPE=NONE&OPERATINGSYSTEM=WINDOWS10&SCS_ECSFLIGHTID=P-E-1013190-3;P-E-1013187-9;P-E-1010984-3;P-E-1012960-C1;P-E-1009540-C1;P-E-1005647-4;P-E-1002779-3;P-R-1005895-2;P-R-1000786-2;P-R-116475-2;P-R-113175-4;P-R-113174-1;P-R-110379-1;"
		"P-R-107838-1;P-R-106524-1;P-R-101783-1;P-R-97577-1;P-R-97457-1;P-R-94390-1;P-R-94360-2;P-R-93416-1;P-R-93413-1;P-R-90963-2;P-R-85265-4;P-R-73296-2&CHNL=CFD&UIT=G", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/xml", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("Impression_4", 
		"URL=https://arc.msn.com/v3/Delivery/Events/Impression?PID=425434348&TID=700387601&CID=128000000003336929&BID=1553385041&PG=IRIS000001.0000000534&TPID=425434348&REQASID=3325CD259D394AB9AF0DE16700E7741A&ASID=9eb1e11b979f4db6b8097d8f7f2f023d&SLOT=1&REQT=20220506T162216&MA_Score=2&&DS_EVTID=9eb1e11b979f4db6b8097d8f7f2f023d&BCNT=10&PG=IRIS000001.0000000534&UNID=88000534&MAP_TID=184D99EC-7348-4514-B5D5-38ADCBB14FA3&ASID=3325CD259D394AB9AF0DE16700E7741A&REQASID=3325CD259D394AB9AF0DE16700E7741A&ARC=1&EMS="
		"1&LOCALE=EN-US&COUNTRY=US&HTD=-1&LANG=1033&DEVLANG=EN&CIP=198.208.47.78&ID=1B4F6F10E8CF6DE93F087E82ECCF6BE7&OPTOUTSTATE=0&HTTPS=1&MARKETBASEDCOUNTRY=US&CFMT=&H=0&W=0&FESVER=1.3&SCS_PROMOTIONCATEGORY=UHFBUYBUTTON;RAILBANNER_M365&ARTICLETYPE=RAILBANNER_M365&AUTHTYPE=NONE&OPERATINGSYSTEM=WINDOWS10&SCS_ECSFLIGHTID=P-E-1013190-3;P-E-1013187-9;P-E-1010984-3;P-E-1012960-C1;P-E-1009540-C1;P-E-1005647-4;P-E-1002779-3;P-R-1005895-2;P-R-1000786-2;P-R-116475-2;P-R-113175-4;P-R-113174-1;P-R-110379-1;"
		"P-R-107838-1;P-R-106524-1;P-R-101783-1;P-R-97577-1;P-R-97457-1;P-R-94390-1;P-R-94360-2;P-R-93416-1;P-R-93413-1;P-R-90963-2;P-R-85265-4;P-R-73296-2&CHNL=CFD&UIT=G", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/xml", 
		"Referer=https://support.microsoft.com/en-us/office/this-website-doesn-t-work-in-internet-explorer-8f5fc675-cd47-414c-9535-12821ddfc554?ui=en-us&rs=en-us&ad=us", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_revert_auto_header("Content-Type");

	web_add_header("Access-Control-Request-Headers", 
		"cache-control, content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Cache-Control", 
		"no-cache");

	web_custom_request("1.0_11", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&client-id=NO_AUTH&client-version=1DS-Web-JS-3.1.6&apikey=83328b3c5ab7488692991e7d63483cff-e640bd11-2392-49b1-b739-ed8e62bcb870-7240&upload-time=1651854148775&ext.intweb.msfpc=GUID%3D2c4fca1a1cd44e9a868490bbcb46a50e%26HASH%3D2c4f%26LV%3D202204%26V%3D4%26LU%3D1651007629165&time-delta-to-apply-millis=34670&w=0", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
