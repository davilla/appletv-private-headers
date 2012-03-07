/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface SSRemoteNotification : NSObject {
@private
	NSDictionary *_userInfo;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int actionType;	// G=0x324f4acd; 
@property(readonly, assign, nonatomic) NSString *alertBodyString;	// G=0x324f4b49; 
@property(readonly, assign, nonatomic) NSString *alertCancelString;	// G=0x324f4c59; 
@property(readonly, assign, nonatomic) NSString *alertOKString;	// G=0x324f4cb5; 
@property(readonly, assign, nonatomic) NSString *alertTitleString;	// G=0x324f4d11; 
@property(readonly, assign, nonatomic) id badgeValue;	// G=0x324f4d6d; 
@property(readonly, assign, nonatomic) NSDictionary *notificationUserInfo;	// G=0x324f4ec1; 
@property(readonly, assign, nonatomic) NSString *soundFileName;	// G=0x324f4ded; 
- (id)initWithNotificationUserInfo:(id)notificationUserInfo;	// 0x324f4a2d
- (id)_valueForAlertKey:(id)alertKey;	// 0x324f4ef9
// declared property getter: - (int)actionType;	// 0x324f4acd
// declared property getter: - (id)alertBodyString;	// 0x324f4b49
// declared property getter: - (id)alertCancelString;	// 0x324f4c59
// declared property getter: - (id)alertOKString;	// 0x324f4cb5
// declared property getter: - (id)alertTitleString;	// 0x324f4d11
// declared property getter: - (id)badgeValue;	// 0x324f4d6d
- (void)dealloc;	// 0x324f4a81
// declared property getter: - (id)notificationUserInfo;	// 0x324f4ec1
// declared property getter: - (id)soundFileName;	// 0x324f4ded
- (id)valueForKey:(id)key;	// 0x324f4ea1
@end
