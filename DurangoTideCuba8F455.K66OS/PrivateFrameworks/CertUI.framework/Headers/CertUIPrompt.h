/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import "CertUI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CertUIPrompt : NSObject {
	SecTrust *_trust;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_service;	// 12 = 0xc
	NSString *_connectionDisplayName;	// 16 = 0x10
	id _responseBlock;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *connectionDisplayName;	// G=0x32630339; S=0x32630c2d; @synthesize=_connectionDisplayName
@property(retain, nonatomic) NSString *host;	// G=0x3262ff65; S=0x32630bdd; @synthesize=_host
@property(retain, nonatomic) NSString *service;	// G=0x3262ff55; S=0x32630c05; @synthesize=_service
@property(assign) SecTrust *trust;	// G=0x3262ff45; S=0x3263045d; converted property
+ (dispatch_queue_s *)promptQueue;	// 0x32630c79
+ (id)stringForResponse:(int)response;	// 0x3262ff11
- (id)_copyPropertiesFromTrust:(SecTrust *)trust;	// 0x32630781
- (id)_digestFromTrust:(SecTrust *)trust;	// 0x326308f1
- (id)_expirationFromTrust:(SecTrust *)trust;	// 0x32630861
- (void)_informConsumerOfResponse:(int)response;	// 0x32630b3d
- (id)_messagingCenter;	// 0x3262ffb1
- (id)_newUserInfoForDisplayName:(id)displayName hostname:(id)hostname trust:(SecTrust *)trust;	// 0x3262ffdd
- (id)_propertyNamed:(id)named ofType:(id)type inProperties:(id)properties;	// 0x3263049d
- (id)_purposeFromTrustProperties:(id)trustProperties;	// 0x32630191
- (int)_responseFromReplyDict:(id)replyDict;	// 0x326309f5
- (int)_sendRemoteMessage;	// 0x32630931
- (id)_sendablePropertiesFromProperties:(id)properties;	// 0x3263069d
- (id)_sendablePropertiesFromTrust:(SecTrust *)trust;	// 0x3263059d
- (id)_sendablePropertyFromProperty:(id)property;	// 0x32630211
- (id)_subtitleFromTrust:(SecTrust *)trust;	// 0x32630801
- (id)_titleFromTrust:(SecTrust *)trust;	// 0x32630831
// declared property getter: - (id)connectionDisplayName;	// 0x32630339
- (void)dealloc;	// 0x326303d9
- (id)description;	// 0x32630375
// declared property getter: - (id)host;	// 0x3262ff65
// declared property getter: - (id)service;	// 0x3262ff55
// declared property setter: - (void)setConnectionDisplayName:(id)name;	// 0x32630c2d
// declared property setter: - (void)setHost:(id)host;	// 0x32630bdd
// declared property setter: - (void)setService:(id)service;	// 0x32630c05
// converted property setter: - (void)setTrust:(SecTrust *)trust;	// 0x3263045d
- (int)showAndWaitForResponse;	// 0x32630b69
- (void)showPromptWithResponseBlock:(id)responseBlock;	// 0x32630a69
// converted property getter: - (SecTrust *)trust;	// 0x3262ff45
@end
