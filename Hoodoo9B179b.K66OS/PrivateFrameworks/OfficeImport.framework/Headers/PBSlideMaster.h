/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PBSlideBase.h"


__attribute__((visibility("hidden")))
@interface PBSlideMaster : PBSlideBase {
}
+ (id)createMasterStyleMap:(id)map state:(id)state;	// 0x327f3c39
+ (void)flattenBaseMasterStyleType:(int)type masterStyleMap:(id)map;	// 0x32951cd5
+ (void)flattenMasterStyleType:(int)type baseType:(int)type2 masterStyleMap:(id)map;	// 0x32951de5
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)layout layoutType:(int)type masterStyleMap:(id)map;	// 0x327f8781
+ (void)flattenTextStyle:(id)style intoTextBox:(id)box;	// 0x327f8925
+ (void)padMissingLevels:(id)levels;	// 0x327f3fbd
+ (void)readMasterDrawables:(id)drawables slideHolder:(id)holder state:(id)state;	// 0x327f564d
+ (void)readSlideLayout:(id)layout slideHolder:(id)holder layoutType:(int)type state:(id)state;	// 0x329520b5
+ (void)readSlideMasterStyles:(id)styles slideHolder:(id)holder state:(id)state;	// 0x327f3879
+ (void)setCannedOtherTextListStyle:(id)style;	// 0x32951ee5
+ (void)setFont:(id)font fromCharacterProperties:(id)characterProperties;	// 0x327f4e75
+ (id)textBodyForPlaceholderType:(int)placeholderType slideLayout:(id)layout;	// 0x327f8899
+ (int)textTypeFor:(int)aFor placeholderType:(int)type;	// 0x327f88fd
@end
