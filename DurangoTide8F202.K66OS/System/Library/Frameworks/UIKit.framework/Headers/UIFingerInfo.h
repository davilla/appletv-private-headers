/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIFingerInfo : NSObject {
@private
	CFDictionaryRef _fingers;	// 4 = 0x4
	int _activeFinger;	// 8 = 0x8
	BOOL _activeFingerLocked;	// 12 = 0xc
}
- (BOOL)chordChanged:(XXStruct_$jUSvD)changed withEvent:(GSEventRef)event adjustLocation:(BOOL)location;	// 0x306f1125
- (void)dealloc;	// 0x306edaf9
- (BOOL)fingersMoved:(XXStruct_$jUSvD)moved withEvent:(GSEventRef)event adjustLocation:(BOOL)location;	// 0x306edc81
- (BOOL)hasActiveFinger;	// 0x306eda01
- (void)startTouch:(XXStruct_$jUSvD)touch withEvent:(GSEventRef)event adjustLocation:(BOOL)location;	// 0x306edddd
@end

