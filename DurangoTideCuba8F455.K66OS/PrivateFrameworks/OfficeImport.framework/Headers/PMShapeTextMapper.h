/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class CMStyle, OADTextBody, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface PMShapeTextMapper : CMMapper {
@private
	OADTextBody *mTextBody;	// 8 = 0x8
	OADOrientedBounds *mBounds;	// 12 = 0xc
	CMStyle *mStyle;	// 16 = 0x10
	BOOL mRectangular;	// 20 = 0x14
}
- (id)initWithOadTextBody:(id)oadTextBody bounds:(id)bounds parent:(id)parent;	// 0x32b7e395
- (void)dealloc;	// 0x32b80d3d
- (BOOL)isTableCellContent;	// 0x32b7eae1
- (void)mapAt:(id)at withState:(id)state;	// 0x32b7e415
- (BOOL)setRectangular:(BOOL)rectangular;	// 0x32b82b09
- (int)textAnchor;	// 0x32c18d79
@end

