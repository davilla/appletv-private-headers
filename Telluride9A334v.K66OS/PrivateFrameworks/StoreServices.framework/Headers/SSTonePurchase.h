/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSPurchase.h"
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSCoding, NSCoding, NSCopying> {
@private
	NSArray *_allowedToneStyles;	// 44 = 0x2c
	NSNumber *_assigneeIdentifier;	// 48 = 0x30
	NSString *_assigneeToneStyle;	// 52 = 0x34
	BOOL _shouldMakeDefaultRingtone;	// 56 = 0x38
	BOOL _shouldMakeDefaultTextTone;	// 57 = 0x39
}
@property(copy, nonatomic) NSArray *allowedToneStyles;	// G=0x324d734d; S=0x324d735d; @synthesize=_allowedToneStyles
@property(retain, nonatomic) NSNumber *assigneeIdentifier;	// G=0x324d7381; S=0x324d7391; @synthesize=_assigneeIdentifier
@property(copy, nonatomic) NSString *assigneeToneStyle;	// G=0x324d73b5; S=0x324d73c5; @synthesize=_assigneeToneStyle
@property(assign, nonatomic) BOOL shouldMakeDefaultRingtone;	// G=0x324d73e9; S=0x324d73f9; @synthesize=_shouldMakeDefaultRingtone
@property(assign, nonatomic) BOOL shouldMakeDefaultTextTone;	// G=0x324d7409; S=0x324d7419; @synthesize=_shouldMakeDefaultTextTone
- (id)initWithCoder:(id)coder;	// 0x324d6cf1
- (id)initWithItem:(id)item offer:(id)offer;	// 0x324d6c15
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324d71f9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324d7311
// declared property getter: - (id)allowedToneStyles;	// 0x324d734d
// declared property getter: - (id)assigneeIdentifier;	// 0x324d7381
// declared property getter: - (id)assigneeToneStyle;	// 0x324d73b5
- (id)copyPropertyListEncoding;	// 0x324d70dd
- (id)copyWithZone:(NSZone *)zone;	// 0x324d7009
- (void *)copyXPCEncoding;	// 0x324d71c5
- (void)dealloc;	// 0x324d6c7d
- (void)encodeWithCoder:(id)coder;	// 0x324d6e91
// declared property setter: - (void)setAllowedToneStyles:(id)styles;	// 0x324d735d
// declared property setter: - (void)setAssigneeIdentifier:(id)identifier;	// 0x324d7391
// declared property setter: - (void)setAssigneeToneStyle:(id)style;	// 0x324d73c5
// declared property setter: - (void)setShouldMakeDefaultRingtone:(BOOL)makeDefaultRingtone;	// 0x324d73f9
// declared property setter: - (void)setShouldMakeDefaultTextTone:(BOOL)makeDefaultTextTone;	// 0x324d7419
// declared property getter: - (BOOL)shouldMakeDefaultRingtone;	// 0x324d73e9
// declared property getter: - (BOOL)shouldMakeDefaultTextTone;	// 0x324d7409
@end

