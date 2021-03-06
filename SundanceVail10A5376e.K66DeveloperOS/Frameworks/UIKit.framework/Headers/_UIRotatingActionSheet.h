/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActionSheet.h"
#import "UIKit-Structs.h"

@protocol UIActionSheetDelegate, _UIRotatingActionSheetDelegate;

@interface _UIRotatingActionSheet : UIActionSheet {
	id<_UIRotatingActionSheetDelegate> _rotatingSheetDelegate;	// 232 = 0xe8
	id<UIActionSheetDelegate> _delegateWhileRotating;	// 236 = 0xec
	unsigned _arrowDirections;	// 240 = 0xf0
	BOOL _isRotating;	// 244 = 0xf4
}
@property(assign, nonatomic) unsigned arrowDirections;	// G=0x30676c9d; S=0x30676cad; @synthesize=_arrowDirections
@property(assign, nonatomic) id<_UIRotatingActionSheetDelegate> rotatingSheetDelegate;	// G=0x30676c7d; S=0x30676c8d; @synthesize=_rotatingSheetDelegate
- (id)init;	// 0x306766bd
- (void)_updateSheetPositionAfterRotation;	// 0x30676b0d
// declared property getter: - (unsigned)arrowDirections;	// 0x30676c9d
- (void)dealloc;	// 0x306767e5
- (void)didRotate;	// 0x30676c4d
- (void)doneWithSheet;	// 0x30676a3d
- (BOOL)presentSheet;	// 0x30676861
- (BOOL)presentSheetFromRect:(CGRect)rect;	// 0x3067694d
// declared property getter: - (id)rotatingSheetDelegate;	// 0x30676c7d
// declared property setter: - (void)setArrowDirections:(unsigned)directions;	// 0x30676cad
// declared property setter: - (void)setRotatingSheetDelegate:(id)delegate;	// 0x30676c8d
- (void)willRotate;	// 0x30676a8d
@end

