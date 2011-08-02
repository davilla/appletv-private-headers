/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding> {
@private
	NSString *_localizedTitle;	// 4 = 0x4
	NSString *_localizedBody;	// 8 = 0x8
	BOOL _isLongForm;	// 12 = 0xc
}
@property(assign) BOOL isLongForm;	// G=0x341032d1; S=0x341032e1; @synthesize=_isLongForm
@property(retain) NSString *localizedBody;	// G=0x34103555; S=0x34103599; @synthesize=_localizedBody
@property(retain) NSString *localizedTitle;	// G=0x3410353d; S=0x3410356d; @synthesize=_localizedTitle
+ (id)warningWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x34103361
- (id)initWithCoder:(id)coder;	// 0x341033a5
- (id)initWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x34103461
- (void)dealloc;	// 0x341034e1
- (void)encodeWithCoder:(id)coder;	// 0x341032f1
// declared property getter: - (BOOL)isLongForm;	// 0x341032d1
// declared property getter: - (id)localizedBody;	// 0x34103555
// declared property getter: - (id)localizedTitle;	// 0x3410353d
// declared property setter: - (void)setIsLongForm:(BOOL)form;	// 0x341032e1
// declared property setter: - (void)setLocalizedBody:(id)body;	// 0x34103599
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x3410356d
@end

