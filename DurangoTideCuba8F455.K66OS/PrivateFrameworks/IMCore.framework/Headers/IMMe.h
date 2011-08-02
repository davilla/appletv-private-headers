/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library

@class IMHandle, NSString, IMPerson, NSMutableArray, NSArray;

@interface IMMe : NSObject {
	IMPerson *_person;	// 4 = 0x4
	NSString *_abNickname;	// 8 = 0x8
	NSString *_abFirstName;	// 12 = 0xc
	NSString *_abFullName;	// 16 = 0x10
	NSString *_abLastName;	// 20 = 0x14
	NSArray *_abEmails;	// 24 = 0x18
	NSMutableArray *_abIMHandles;	// 28 = 0x1c
	NSMutableArray *_loginIMHandles;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) IMHandle *bestIMHandle;	// G=0x30adf121; 
@property(readonly, assign, nonatomic) NSString *email;	// G=0x30adf369; 
@property(readonly, assign, nonatomic) NSArray *emails;	// G=0x30adf3a1; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x30adf3ed; 
@property(readonly, assign, nonatomic) NSString *fullName;	// G=0x30adf1e1; 
@property(readonly, assign, nonatomic) NSString *guid;	// G=0x30adf061; 
@property(readonly, assign, nonatomic) NSArray *imHandles;	// G=0x30adf0f1; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x30adf281; 
@property(readonly, retain) NSMutableArray *loginIMHandles;	// G=0x30adf07d; converted property
@property(readonly, assign, nonatomic) NSString *nickname;	// G=0x30adf47d; 
@property(readonly, assign, nonatomic) IMPerson *person;	// G=0x30adf06d; 
+ (id)fallbackUserName;	// 0x30adfefd
+ (id)imHandleForService:(id)service;	// 0x30adfa61
+ (id)me;	// 0x30adff81
- (id)init;	// 0x30adf9d5
- (id)_imHandlesWithIDs:(id)ids onAccount:(id)account;	// 0x30adf85d
- (BOOL)addIMHandle:(id)handle;	// 0x30adf62d
- (BOOL)addLoginIMHandle:(id)handle;	// 0x30adf745
// declared property getter: - (id)bestIMHandle;	// 0x30adf121
- (void)dealloc;	// 0x30adf90d
// declared property getter: - (id)email;	// 0x30adf369
// declared property getter: - (id)emails;	// 0x30adf3a1
// declared property getter: - (id)firstName;	// 0x30adf3ed
// declared property getter: - (id)fullName;	// 0x30adf1e1
// declared property getter: - (id)guid;	// 0x30adf061
// declared property getter: - (id)imHandles;	// 0x30adf0f1
- (BOOL)isIMHandleLoginIMHandle:(id)handle;	// 0x30adfb35
// declared property getter: - (id)lastName;	// 0x30adf281
// converted property getter: - (id)loginIMHandles;	// 0x30adf07d
- (void)myPictureChanged;	// 0x30adf08d
// declared property getter: - (id)nickname;	// 0x30adf47d
// declared property getter: - (id)person;	// 0x30adf06d
- (void)rebuildIMHandles;	// 0x30adfc41
- (BOOL)removeIMHandle:(id)handle;	// 0x30adf559
- (BOOL)removeLoginIMHandle:(id)handle;	// 0x30adf6e1
- (void)resetABPerson;	// 0x30adf785
- (void)setFirstName:(id)name lastName:(id)name2;	// 0x30adf4dd
- (void)setIMPerson:(id)person;	// 0x30adfe69
@end

