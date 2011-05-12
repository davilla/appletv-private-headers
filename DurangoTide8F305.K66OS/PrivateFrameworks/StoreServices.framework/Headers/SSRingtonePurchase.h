/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "SSPurchase.h"

@class NSNumber;

@interface SSRingtonePurchase : SSPurchase <NSCoding, NSCopying> {
@private
	NSNumber *_assigneeIdentifier;	// 28 = 0x1c
	BOOL _shouldMakeDefaultRingtone;	// 32 = 0x20
}
@property(retain, nonatomic) NSNumber *assigneeIdentifier;	// G=0x324c6501; S=0x324c72d9; @synthesize=_assigneeIdentifier
@property(assign, nonatomic) BOOL shouldMakeDefaultRingtone;	// G=0x324c64e1; S=0x324c64f1; @synthesize=_shouldMakeDefaultRingtone
- (id)initWithCoder:(id)coder;	// 0x324c6bb1
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324c6945
// declared property getter: - (id)assigneeIdentifier;	// 0x324c6501
- (id)copyPropertyListEncoding;	// 0x324c69cd
- (id)copyWithZone:(NSZone *)zone;	// 0x324c6a45
- (void)dealloc;	// 0x324c6cc9
- (void)encodeWithCoder:(id)coder;	// 0x324c6aad
// declared property setter: - (void)setAssigneeIdentifier:(id)identifier;	// 0x324c72d9
// declared property setter: - (void)setShouldMakeDefaultRingtone:(BOOL)makeDefaultRingtone;	// 0x324c64f1
// declared property getter: - (BOOL)shouldMakeDefaultRingtone;	// 0x324c64e1
@end

