/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSString, NSDictionary;

@interface FTProfileMessage : FTMessage {
	NSString *_profileID;	// 24 = 0x18
	NSString *_authToken;	// 28 = 0x1c
	NSDictionary *_responseAlert;	// 32 = 0x20
}
@property(copy) NSString *authToken;	// G=0x33fae1e5; S=0x33fae22d; @synthesize=_authToken
@property(copy) NSString *profileID;	// G=0x33fae1fd; S=0x33fae255; @synthesize=_profileID
@property(copy) NSDictionary *responseAlertInfo;	// G=0x33fae215; S=0x33fae27d; @synthesize=_responseAlert
- (id)additionalMessageHeaders;	// 0x33fae02d
// declared property getter: - (id)authToken;	// 0x33fae1e5
- (void)dealloc;	// 0x33fadf39
- (void)handleResponseDictionary:(id)dictionary;	// 0x33fae189
- (BOOL)hasRequiredKeys;	// 0x33fadfa5
// declared property getter: - (id)profileID;	// 0x33fae1fd
// declared property getter: - (id)responseAlertInfo;	// 0x33fae215
// declared property setter: - (void)setAuthToken:(id)token;	// 0x33fae22d
// declared property setter: - (void)setProfileID:(id)anId;	// 0x33fae255
// declared property setter: - (void)setResponseAlertInfo:(id)info;	// 0x33fae27d
@end

