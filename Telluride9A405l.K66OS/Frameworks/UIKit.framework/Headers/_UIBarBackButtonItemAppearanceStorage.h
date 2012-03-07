/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSValue, NSNumber;

__attribute__((visibility("hidden")))
@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
@private
	NSMutableDictionary *backgroundImages;	// 4 = 0x4
	NSMutableDictionary *miniBackgroundImages;	// 8 = 0x8
	NSValue *titlePositionOffset;	// 12 = 0xc
	NSValue *miniTitlePositionOffset;	// 16 = 0x10
	NSNumber *backgroundVerticalAdjustment;	// 20 = 0x14
	NSNumber *miniBackgroundVerticalAdjustment;	// 24 = 0x18
}
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x32e13d4d; S=0x32ef82f5; @synthesize
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x32e13d7d; S=0x32ef8319; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x32e13d1d; S=0x32ef82d1; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x32e13ced; S=0x32ef82ad; @synthesize
- (id)anyBackgroundImage;	// 0x32ef8151
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x32d47ce9
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x32e13d4d
- (void)dealloc;	// 0x32ef81fd
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x32e13d7d
// declared property getter: - (id)miniTitlePositionOffset;	// 0x32e13d1d
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x32d47a49
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x32ef82f5
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x32ef8319
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x32ef82d1
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x32ef82ad
// declared property getter: - (id)titlePositionOffset;	// 0x32e13ced
@end
