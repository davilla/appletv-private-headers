/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramListMapper : CMDiagramShapeMapper {
@private
	float mMaxLineCount;	// 112 = 0x70
}
- (void)mapAt:(id)at withState:(id)state;	// 0x31a7af4d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x31a7b5cd
- (void)mapListItemAt:(id)at index:(int)index withState:(id)state;	// 0x31a7b61d
- (void)setDefaultFonSize;	// 0x31a7b20d
- (float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;	// 0x31a7b38d
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x31aa2195
- (id)suggestedBoundsForHListItemWithIndex:(int)index;	// 0x31a7b6e9
- (CGSize)textSize;	// 0x31a7b51d
@end
