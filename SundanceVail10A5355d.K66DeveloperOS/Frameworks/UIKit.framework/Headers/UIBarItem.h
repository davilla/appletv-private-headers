/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIAppearance.h"
#import "UIKit-Structs.h"

@class UIImage, NSString;

@interface UIBarItem : NSObject <UIAppearance> {
	BOOL _hasCustomizableInstanceAppearanceModifications;	// 4 = 0x4
	BOOL _shouldArchiveUIAppearanceTags;	// 5 = 0x5
}
@property(assign, nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) BOOL _hasCustomizableInstanceAppearanceModifications;	// G=0x33c4ae51; S=0x33c4ae61; @synthesize
@property(assign, nonatomic, setter=_setShouldArchiveUIAppearanceTags:) BOOL _shouldArchiveUIAppearanceTags;	// G=0x33c4ae71; S=0x33c4ae81; @synthesize
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// @dynamic
@property(retain, nonatomic) UIImage *image;	// @dynamic
@property(assign, nonatomic) UIEdgeInsets imageInsets;	// @dynamic
@property(retain, nonatomic) UIImage *landscapeImagePhone;	// @dynamic
@property(assign, nonatomic) UIEdgeInsets landscapeImagePhoneInsets;	// @dynamic
@property(assign, nonatomic) int tag;	// @dynamic
@property(copy, nonatomic) NSString *title;	// @dynamic
+ (id)_appearanceProxyViewClasses;	// 0x33c4ac5d
+ (id)_appearanceRecorder;	// 0x33c4ac81
+ (id)_appearanceRecorderWhenContainedIn:(Class)anIn;	// 0x33c4ad39
+ (id)_appearanceWhenContainedIn:(id)anIn;	// 0x33c4acbd
+ (id)appearance;	// 0x33c4ac61
+ (id)appearanceWhenContainedIn:(Class)anIn;	// 0x33c4acdd
- (id)initWithCoder:(id)coder;	// 0x33c4ad99
// declared property getter: - (BOOL)_hasCustomizableInstanceAppearanceModifications;	// 0x33c4ae51
// declared property setter: - (void)_setHasCustomizableInstanceAppearanceModifications:(BOOL)modifications;	// 0x33c4ae61
// declared property setter: - (void)_setShouldArchiveUIAppearanceTags:(BOOL)_set;	// 0x33c4ae81
// declared property getter: - (BOOL)_shouldArchiveUIAppearanceTags;	// 0x33c4ae71
- (void)encodeWithCoder:(id)coder;	// 0x33c4adfd
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33c4ae49
- (id)titleTextAttributesForState:(unsigned)state;	// 0x33c4ae4d
@end

