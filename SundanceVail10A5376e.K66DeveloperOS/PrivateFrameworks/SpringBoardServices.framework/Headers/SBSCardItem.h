/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import "SpringBoardServices-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSString;

@interface SBSCardItem : NSObject <NSCopying, NSCoding> {
	NSString *_identifier;	// 4 = 0x4
	NSData *_iconData;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	NSString *_body;	// 16 = 0x10
	BOOL _requiresPasscode;	// 20 = 0x14
	NSString *_bundleName;	// 24 = 0x18
	NSDictionary *_userInfo;	// 28 = 0x1c
}
@property(copy, nonatomic) NSString *body;	// G=0x366d78a9; S=0x366d78bd; @synthesize=_body
@property(copy, nonatomic) NSString *bundleName;	// G=0x366d78ed; S=0x366d7901; @synthesize=_bundleName
@property(copy, nonatomic) NSData *iconData;	// G=0x366d7861; S=0x366d7875; @synthesize=_iconData
@property(copy, nonatomic) NSString *identifier;	// G=0x366d783d; S=0x366d7851; @synthesize=_identifier
@property(assign, nonatomic) BOOL requiresPasscode;	// G=0x366d78cd; S=0x366d78dd; @synthesize=_requiresPasscode
@property(copy, nonatomic) NSString *title;	// G=0x366d7885; S=0x366d7899; @synthesize=_title
@property(copy, nonatomic) NSDictionary *userInfo;	// G=0x366d7911; S=0x366d7925; @synthesize=_userInfo
- (id)initWithCoder:(id)coder;	// 0x366d72c9
- (id)initWithIdentifier:(id)identifier iconData:(id)data title:(id)title body:(id)body classification:(int)classification bundleName:(id)name userInfo:(id)info;	// 0x366d7291
- (id)initWithIdentifier:(id)identifier iconData:(id)data title:(id)title body:(id)body requiresPasscode:(BOOL)passcode bundleName:(id)name userInfo:(id)info;	// 0x366d70cd
// declared property getter: - (id)body;	// 0x366d78a9
// declared property getter: - (id)bundleName;	// 0x366d78ed
- (id)copyWithZone:(NSZone *)zone;	// 0x366d7511
- (void)dealloc;	// 0x366d71e9
- (id)description;	// 0x366d7765
- (void)encodeWithCoder:(id)coder;	// 0x366d73e5
- (unsigned)hash;	// 0x366d7699
// declared property getter: - (id)iconData;	// 0x366d7861
// declared property getter: - (id)identifier;	// 0x366d783d
- (BOOL)isEqual:(id)equal;	// 0x366d76e5
// declared property getter: - (BOOL)requiresPasscode;	// 0x366d78cd
// declared property setter: - (void)setBody:(id)body;	// 0x366d78bd
// declared property setter: - (void)setBundleName:(id)name;	// 0x366d7901
// declared property setter: - (void)setIconData:(id)data;	// 0x366d7875
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x366d7851
// declared property setter: - (void)setRequiresPasscode:(BOOL)passcode;	// 0x366d78dd
// declared property setter: - (void)setTitle:(id)title;	// 0x366d7899
// declared property setter: - (void)setUserInfo:(id)info;	// 0x366d7925
- (id)sortDate;	// 0x366d765d
// declared property getter: - (id)title;	// 0x366d7885
// declared property getter: - (id)userInfo;	// 0x366d7911
@end

