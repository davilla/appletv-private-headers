/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface Nflxhls : NSObject {
@private
	NSString *crashFormat;	// 4 = 0x4
	NSString *crashReport;	// 8 = 0x8
	double lastPingTime;	// 12 = 0xc
}
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x307e4ba0; S=0x307e4b84; converted property
@property(retain) id userId;	// G=0x307e4bec; S=0x307e4bfc; converted property
+ (int)defaultCDNMeasurementMethod;	// 0x307e4b44
+ (int)defaultCDNRankingMethod;	// 0x307e4b08
+ (BOOL)defaultSupportPlaylist302Redirects;	// 0x307e4b98
+ (void)enterShutdown;	// 0x307eb33c
+ (id)instance;	// 0x307eb2a8
- (id)init;	// 0x307ee200
- (void)initAndStartNccp;	// 0x307e92bc
- (BOOL)LogCollectorBackgroundProcessingEnabled;	// 0x307e4c48
- (void)_logout;	// 0x307eb37c
- (void)appLogError:(id)error withInfoMessage:(id)infoMessage withException:(id)exception withStacktrace:(id)stacktrace;	// 0x307e4e14
- (id)cdnMeasurementMethodAsNSString:(int)string;	// 0x307e4b5c
- (id)cdnRankingMethodAsNSString:(int)string;	// 0x307e4b20
- (BOOL)configBackgroundProcessingEnabled;	// 0x307e4c5c
- (BOOL)configure:(id)configure forView:(id)view;	// 0x307eccfc
- (void)configureWithFujiConfig:(id)fujiConfig;	// 0x307e9924
- (id)cookieExpiresForNameKey:(id)nameKey;	// 0x307e81a8
- (id)cookieValueForNameKey:(id)nameKey;	// 0x307eb9dc
- (id)countryDomain;	// 0x307ea328
- (id)createURLRequest:(id)request;	// 0x307e6530
- (void)dealloc;	// 0x307ede94
- (void)debugHttp:(BOOL)http;	// 0x307e4dd4
- (void)debugNfhlsProtocol:(BOOL)protocol;	// 0x307e4da8
- (void)deleteConfig;	// 0x307eb05c
- (void)deleteNetflixCookies;	// 0x307ef274
- (void)deleteNflxId;	// 0x307eb1ac
- (void)deleteUserExistence;	// 0x307e7ef4
- (void)didEnterBackground;	// 0x307e836c
- (void)enableConfigBackgroundProcessing:(BOOL)processing;	// 0x307ea1d4
- (void)enableLogCollectorBackgroundProcessing:(BOOL)processing;	// 0x307ea22c
- (void)enableOutputtingOfNCCPTransactionResponse:(BOOL)nccptransactionResponse;	// 0x307e4d7c
- (void)enablePeriodicWorkerTimer:(BOOL)timer;	// 0x307e4ec8
- (id)encodedURLParameterString:(id)string;	// 0x307ef38c
- (id)esn;	// 0x307e9998
- (const char *)esnPrefix;	// 0x307e9a00
- (id)esnPrefixAsNSString;	// 0x307e99cc
- (void)generateNewUUIDStartTime;	// 0x307e9f28
- (id)genericFeedURL;	// 0x307e9aa8
- (id)getAPIRequestContextParameters;	// 0x307e9b8c
- (int)getCDNMeasurementMethod;	// 0x307e4b4c
- (int)getCDNRankingMethod;	// 0x307e4b10
- (id)getConfigurationFromAPI;	// 0x307eb454
- (id)getCountry;	// 0x307e4cdc
- (id)getCurrentBitrate;	// 0x307ea770
- (id)getLanguage;	// 0x307e4cec
- (id)getLocalhost;	// 0x307e4bb4
- (id)getNflxIdKey;	// 0x307e4a9c
- (id)getNflxIdValue;	// 0x307e4aac
- (id)getNflxSecretKey;	// 0x307e4abc
- (id)getNflxSecretValue;	// 0x307e4acc
- (id)getNflxUserId;	// 0x307e4a8c
- (int)getTarget;	// 0x307e4d50
- (id)getTestNCCPDataURL;	// 0x307e4c70
- (id)getTestNCCPIdentityURL;	// 0x307e4c80
- (id)getTestNCCPLoggingURL;	// 0x307e4c90
- (id)getUUID;	// 0x307e9da4
- (void)installPeriodicWorkerTimer:(id)timer;	// 0x307e4f5c
- (BOOL)isLoggingToConsole;	// 0x307f0388
- (BOOL)isNato;	// 0x307edc84
- (BOOL)isUsingPeriodicWorkerTimer;	// 0x307e4d3c
- (BOOL)isUsingStagingNCCP;	// 0x307e4ca0
- (BOOL)isUsingTestEnv;	// 0x307e4c0c
- (BOOL)login:(id)login password:(id)password error:(id *)error;	// 0x307e5f3c
- (BOOL)loginRequired:(id *)required;	// 0x307e6324
- (void)logout;	// 0x307e62cc
- (void)nccpSendPing;	// 0x307e9740
- (BOOL)nccpStarted;	// 0x307e4adc
- (void)notifyErrorMessage:(BOOL)message message:(id)message2;	// 0x307e5014
- (void)notifyLogin;	// 0x307e6234
- (void)notifyNetworkStatus:(id)status;	// 0x307e5244
- (void)notifyNetworkStatus:(id)status netspec:(id)netspec;	// 0x307e51e4
- (void)notifyNetworkStatus:(id)status netspec:(id)netspec mcc:(id)mcc mnc:(id)mnc carrier:(id)carrier;	// 0x307e517c
- (BOOL)notifyPlayerEnd:(double)end reason:(id)reason error:(id *)error;	// 0x307e58cc
- (void)notifyPlayerLoadState:(double)state playing:(BOOL)playing;	// 0x307e5820
- (void)notifyPlayerPause:(double)pause;	// 0x307e5664
- (void)notifyPlayerResume:(double)resume;	// 0x307e578c
- (void)notifyPlayerSeek:(double)seek;	// 0x307e55d0
- (BOOL)notifyPlayerStartFailed:(double)failed reason:(id)reason error:(id *)error;	// 0x307e529c
- (BOOL)notifyPlayerStartSucceeded:(double)succeeded error:(id *)error;	// 0x307e5448
- (void)notifyProgress:(double)progress;	// 0x307e56f8
- (void)notifyScreenSelection:(int)selection;	// 0x307e513c
- (id)oAuthSignRequest:(id)request params:(id)params withHTTPMethod:(id)httpmethod;	// 0x307efec4
- (void)periodicWorkerThreadFunc:(id)func;	// 0x307eac8c
- (void)periodicWorkerTrigger:(id)trigger;	// 0x307eaf58
- (BOOL)preparePlayList:(id)list returningPlayUrl:(id *)url audioEncoding:(int *)encoding position:(double *)position duration:(double *)duration error:(id *)error;	// 0x307e5a5c
- (id)pseudoLocalizeString:(id)string withValue:(id)value;	// 0x307ea5b4
- (void)queueReconfigure;	// 0x307ea0a4
- (BOOL)reconfigure:(id)reconfigure;	// 0x307ebfc4
- (void)reconfigureIfNecessary;	// 0x307ea100
- (void)registerCrashReport:(id)report report:(id)report2;	// 0x307e98c4
- (void)registerNfhlsProtocol;	// 0x307e8430
- (void)reportAndAssignAuthorizationToken:(id)token;	// 0x307e7028
- (void)requestAccessToken:(id)token didFailWithError:(id)error;	// 0x307e664c
- (void)requestAccessToken:(id)token didFinishWithData:(id)data;	// 0x307e6754
- (void)requestAccessTokenWorker;	// 0x307e6c58
- (void)requestAuthorizationToken:(id)token didFailWithError:(id)error;	// 0x307e706c
- (void)requestAuthorizationToken:(id)token didFinishWithData:(id)data;	// 0x307e6dc0
- (void)requestAuthorizationTokenWorker;	// 0x307e7174
- (void)requestNetflixLogin;	// 0x307eeab4
- (BOOL)restoreNeededConfigCookies:(BOOL)cookies;	// 0x307e72c4
- (BOOL)restoreNeededLoginCookies;	// 0x307e7870
- (BOOL)saveNeededConfigCookies:(id)cookies;	// 0x307e74ac
- (BOOL)saveNeededLoginCookies:(id)cookies;	// 0x307e7bf4
- (void)setCDNMeasurementMethod:(int)method;	// 0x307e4b34
- (void)setCDNRankingMethod:(int)method;	// 0x307e4af8
- (void)setCDNValue:(int)value;	// 0x307eb2fc
- (void)setCountryCode:(id)code;	// 0x307ea3ac
- (void)setCred:(id)cred idtype:(id)idtype secid:(id)secid secidtype:(id)secidtype;	// 0x307eab68
- (BOOL)setCredentialFromCookie;	// 0x307ea8cc
- (BOOL)setCredentialUsingCookie;	// 0x307eac5c
- (void)setDeviceUserAgent:(id)agent;	// 0x307ea418
- (void)setDownloadableContentProfile:(int)profile;	// 0x307ea4e4
- (void)setExpiresThreshold:(double)threshold;	// 0x307e4cfc
- (void)setInitialBitrate3G:(unsigned)g;	// 0x307ea7a8
- (void)setInitialBitrateWifi:(unsigned)wifi;	// 0x307ea7e8
- (void)setKeyUseCustom:(BOOL)custom;	// 0x307ea524
- (void)setLanguage:(id)language;	// 0x307e9a34
- (void)setLogToConsole:(BOOL)console;	// 0x307f034c
- (void)setOSVersion:(id)version;	// 0x307e50ec
- (void)setPlayListUseCustom:(BOOL)custom;	// 0x307ea564
// converted property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x307e4b84
- (void)setUIVersion:(id)version;	// 0x307e5114
- (void)setUseHttp:(BOOL)http;	// 0x307ea828
- (void)setUsePseudoLocalizedString:(BOOL)string;	// 0x307ea720
// converted property setter: - (void)setUserId:(id)anId;	// 0x307e4bfc
- (void)setUsing3g:(BOOL)g;	// 0x307e50ac
- (void)setm3u8bandwithSource:(int)source;	// 0x307ea4a4
- (void)setupFujiTarget:(int)target;	// 0x307edcb8
- (void)showCookies;	// 0x307e8044
- (void)startWithParams:(id)params;	// 0x307ee598
- (void)startWithParams:(id)params withSettings:(id)settings;	// 0x307e9288
- (void)startWithParamsPrologue:(id)paramsPrologue;	// 0x307e917c
- (void)startWithParamsPrologue:(id)paramsPrologue withSettings:(id)settings;	// 0x307e924c
- (void)stop;	// 0x307ebc18
- (BOOL)supportDD5_1;	// 0x307e4c20
// converted property getter: - (BOOL)supportPlaylist302Redirects;	// 0x307e4ba0
- (id)uibootURL;	// 0x307e4cb4
- (void)unregisterNfhlsProtocol;	// 0x307e8408
- (void)updateParams:(id)params;	// 0x307e8458
- (BOOL)useDD5_1_profiles_v2;	// 0x307e4c34
- (BOOL)usePseudoLocalizedStrings;	// 0x307e4b70
- (void)useStagingNCCP:(BOOL)nccp;	// 0x307ea000
- (void)useTestEnv:(BOOL)env;	// 0x307ea284
// converted property getter: - (id)userId;	// 0x307e4bec
- (id)version;	// 0x307eafa8
- (long long)webServiceGetLogTimeInMS;	// 0x307e4e74
- (void)webServiceLogActivity:(id)activity forAction:(id)action onView:(id)view withStartTimeInMS:(long long)ms withResponseTimeInMS:(long long)ms5;	// 0x307efb7c
- (void)webServiceLogError:(id)error withNSError:(id)nserror withInfoMessage:(id)infoMessage forAction:(id)action onView:(id)view;	// 0x307ef764
- (void)webServiceLogError:(id)error withSubCodeError:(int)subCodeError withInfoMessage:(id)infoMessage forAction:(id)action onView:(id)view;	// 0x307ef3e4
- (void)willEnterForeground;	// 0x307e82a0
@end

