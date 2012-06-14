/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedMerchant.h"


__attribute__((visibility("hidden")))
@interface ATVSedonaMerchant : ATVFeedMerchant {
@private
	id _startApplicationCompletionHandler;	// 20 = 0x14
}
+ (void)initialize;	// 0x3292e57d
- (id)initWithIdentifier:(id)identifier;	// 0x3292e6b5
- (void)_authenticationSucceeded:(id)succeeded;	// 0x3292f8e1
- (BOOL)_ignoreNetflixAuthNotifications;	// 0x3292f72d
- (BOOL)_initializeNetflixLibrary;	// 0x3292e8c5
- (id)_itunesHostedNetflixTopShelfURL;	// 0x3292f465
- (void)_libraryStartFinished:(id)finished;	// 0x3292fec5
- (void)_logoutFinished:(id)finished;	// 0x32930139
- (void)_networkTimeReady:(id)ready;	// 0x3292f92d
- (void)_preferredAccountEstablished:(id)established;	// 0x3292f83d
- (void)_preferredAccountRemoved:(id)removed;	// 0x3292f77d
- (void)_vendorInvalidCredentials:(id)credentials;	// 0x3292f979
- (void)_vendorOutOfDateSoftware:(id)dateSoftware;	// 0x3292fc2d
- (id)accountType;	// 0x3292e699
- (void)dealloc;	// 0x3292e849
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x3292f04d
- (id)localizedStringForKey:(id)key;	// 0x3292f175
- (id)merchantErrorForError:(id)error;	// 0x3292f1f5
- (id)representativeFeedURL;	// 0x3292f4a5
- (id)rootController;	// 0x3292f571
- (void)startApplication:(id)application;	// 0x3292f591
@end
