/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSString, BBAction;

@interface BBButton : NSObject <NSCopying, NSCoding> {
	NSString *_title;	// 4 = 0x4
	BBAction *_action;	// 8 = 0x8
}
@property(retain, nonatomic) BBAction *action;	// G=0x342787d9; S=0x342787e9; @synthesize=_action
@property(copy, nonatomic) NSString *title;	// G=0x342787a5; S=0x342787b5; @synthesize=_title
+ (id)buttonWithTitle:(id)title action:(id)action;	// 0x34278495
- (id)initWithCoder:(id)coder;	// 0x3427868d
// declared property getter: - (id)action;	// 0x342787d9
- (id)copyWithZone:(NSZone *)zone;	// 0x342785d9
- (void)dealloc;	// 0x34278581
- (void)encodeWithCoder:(id)coder;	// 0x34278741
// declared property setter: - (void)setAction:(id)action;	// 0x342787e9
// declared property setter: - (void)setTitle:(id)title;	// 0x342787b5
// declared property getter: - (id)title;	// 0x342787a5
@end

