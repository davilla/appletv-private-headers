/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSURL;

@interface EKParticipant : NSObject <NSCopying> {
@private
	NSURL *_address;	// 4 = 0x4
	NSString *_commonName;	// 8 = 0x8
	NSString *_emailAddress;	// 12 = 0xc
	int _status;	// 16 = 0x10
	int _role;	// 20 = 0x14
	int _type;	// 24 = 0x18
	BOOL _isSelf;	// 28 = 0x1c
	unsigned _dirtyFlags;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x334ad081; 
@property(readonly, retain) NSString *emailAddress;	// G=0x334acffd; converted property
@property(readonly, assign, nonatomic) NSString *name;	// G=0x334acfcd; 
@property(readonly, assign, nonatomic) int participantRole;	// G=0x334acf9d; 
@property(readonly, assign, nonatomic) int participantStatus;	// G=0x334acf8d; 
@property(readonly, assign, nonatomic) int participantType;	// G=0x334acfad; 
+ (id)participantWithEmailAddress:(id)emailAddress commonName:(id)name;	// 0x334ad825
- (id)initWithCoder:(id)coder;	// 0x334ad931
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x334ad7a5
- (id)initWithEmailAddress:(id)emailAddress name:(id)name isSelf:(BOOL)aSelf;	// 0x334ad6e1
- (id)initWithEmailAddress:(id)emailAddress name:(id)name role:(int)role status:(int)status type:(int)type;	// 0x334ad5e5
- (id)initWithEmailAddress:(id)emailAddress name:(id)name role:(int)role status:(int)status type:(int)type isSelf:(BOOL)aSelf;	// 0x334ad4e5
- (id)initWithURL:(id)url name:(id)name emailAddress:(id)address role:(int)role status:(int)status type:(int)type isSelf:(BOOL)aSelf;	// 0x334ada85
- (id)initWithURL:(id)url name:(id)name isSelf:(BOOL)aSelf;	// 0x334ad435
- (id)initWithURL:(id)url name:(id)name role:(int)role status:(int)status type:(int)type isSelf:(BOOL)aSelf;	// 0x334ad381
- (void *)ABRecordWithAddressBook:(void *)addressBook;	// 0x334adc69
// declared property getter: - (id)URL;	// 0x334ad081
- (id)copyWithZone:(NSZone *)zone;	// 0x334ad281
- (void)dealloc;	// 0x334ad8c5
- (id)description;	// 0x334ad1ad
// converted property getter: - (id)emailAddress;	// 0x334acffd
- (void)encodeWithCoder:(id)coder;	// 0x334ad295
- (unsigned)hash;	// 0x334ad189
- (BOOL)isCurrentUser;	// 0x334acfbd
- (BOOL)isDirty;	// 0x334acf79
- (BOOL)isEqual:(id)equal;	// 0x334ad0b1
// declared property getter: - (id)name;	// 0x334acfcd
// declared property getter: - (int)participantRole;	// 0x334acf9d
// declared property getter: - (int)participantStatus;	// 0x334acf8d
// declared property getter: - (int)participantType;	// 0x334acfad
@end

