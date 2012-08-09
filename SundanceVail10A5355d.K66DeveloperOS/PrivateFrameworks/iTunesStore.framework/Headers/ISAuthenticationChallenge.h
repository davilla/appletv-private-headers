/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject {
	NSString *_localizedMessage;	// 4 = 0x4
	NSString *_localizedTitle;	// 8 = 0x8
}
@property(readonly, assign) int failureCount;	// G=0x37a6398d; 
@property(readonly, assign) BOOL hasPassword;	// G=0x37a63991; 
@property(retain) NSString *localizedMessage;	// G=0x37a639d9; S=0x37a639ed; @synthesize=_localizedMessage
@property(retain) NSString *localizedTitle;	// G=0x37a639fd; S=0x37a63a11; @synthesize=_localizedTitle
@property(readonly, assign) NSString *password;	// G=0x37a63995; 
@property(readonly, assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x37a63999; 
@property(readonly, assign) NSString *user;	// G=0x37a6399d; 
@property(readonly, assign) BOOL userNameIsEditable;	// G=0x37a639d1; 
@property(readonly, assign) BOOL userNameIsEmail;	// G=0x37a639d5; 
- (void)cancelAuthentication;	// 0x37a63961
- (void)dealloc;	// 0x37a63909
// declared property getter: - (int)failureCount;	// 0x37a6398d
// declared property getter: - (BOOL)hasPassword;	// 0x37a63991
// declared property getter: - (id)localizedMessage;	// 0x37a639d9
// declared property getter: - (id)localizedTitle;	// 0x37a639fd
// declared property getter: - (id)password;	// 0x37a63995
// declared property getter: - (id)sender;	// 0x37a63999
// declared property setter: - (void)setLocalizedMessage:(id)message;	// 0x37a639ed
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x37a63a11
- (void)useCredential:(id)credential;	// 0x37a639a1
// declared property getter: - (id)user;	// 0x37a6399d
// declared property getter: - (BOOL)userNameIsEditable;	// 0x37a639d1
// declared property getter: - (BOOL)userNameIsEmail;	// 0x37a639d5
@end
