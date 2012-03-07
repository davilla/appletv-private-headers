/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSArray.h> // Unknown library


@interface NSArray (UIStringDrawingPrivate)
- (CGSize)_drawComponentsJoinedByString:(id)string atPoint:(CGPoint *)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x32e30c69
- (CGSize)drawComponentsJoinedByString:(id)string atPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x32e310ed
- (CGSize)sizeOfComponentsJoinedByString:(id)componentsJoinedByString withFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x32e310b1
@end

@interface NSArray (UICollectionAdditions)
- (id)_nextToLastObject;	// 0x32cb5c19
@end

@interface NSArray (UICollectionAdditions_Performance)
- (id)_initWithObjectsFromArray:(id)array range:(NSRange)range;	// 0x32e395b1
- (void)_makeObjectsPerformSelector:(SEL)selector object:(id)object range:(NSRange)range;	// 0x32e39639
@end

@interface NSArray (UIKBExtras)
- (id)_intersectionWithArray:(id)array;	// 0x32e9b0f1
- (id)_kb_firstObject;	// 0x32e9b025
- (BOOL)_kb_firstObjectsEqual:(unsigned)equal;	// 0x32e9b075
- (BOOL)_kb_firstTwoObjectsEqual;	// 0x32e9b05d
- (NSRange)_rangeWithStartIndex:(int)startIndex endIndex:(int)index;	// 0x32e9b1c5
- (id)intersectionWithArray:(id)array;	// 0x32e9b225
- (NSRange)rangeWithStartIndex:(int)startIndex endIndex:(int)index;	// 0x32e9b235
@end

@interface NSArray (UIPageViewControllerArrayAdditions)
- (id)uiFirstObject;	// 0x33000fb1
- (id)uiOnlyObject;	// 0x33000fe9
@end
