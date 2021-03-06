/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTTableModel.h"


@interface GQDTSpiceTableModel : GQDTTableModel {
}
+ (const StateSpec *)stateForReading;	// 0x34bf60b9
- (CFArrayRef)createSizeArrayFromPositionVector:(vector<float, std::allocator<float> > *)positionVector;	// 0x34bf61ed
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x34bf60c5
- (int)setColumnWidthsFromState:(id)state;	// 0x34bf6191
- (int)setRowHeightsFromState:(id)state;	// 0x34bf6135
@end

