/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject {
@private
	CFDataRef mPackedValues;	// 4 = 0x4
	unsigned mDataValueCount;	// 8 = 0x8
	CFDictionaryRef mIndexToDataValueMap;	// 12 = 0xc
	bool mContainsStringValue;	// 16 = 0x10
}
- (id)init;	// 0x32c35b15
- (id)initWithDataPointCount:(unsigned)dataPointCount;	// 0x32c35d51
- (bool)addDataPoint:(CHDDataPoint *)point;	// 0x32c35ea9
- (bool)addDataValue:(id)value;	// 0x32c93e95
- (void)cleanup;	// 0x32c38199
- (bool)containsStringValue;	// 0x32c479c9
- (unsigned)count;	// 0x32c35c59
- (CHDDataPoint *)dataPointAtIndex:(unsigned)index;	// 0x32c361e9
- (CHDDataPoint *)dataPointWithIndex:(unsigned)index;	// 0x32c9440d
- (id)dataValueAtIndex:(unsigned)index;	// 0x32c3db91
- (id)dataValueWithIndex:(unsigned)index;	// 0x32c943bd
- (void)dealloc;	// 0x32c3815d
- (void)finishReading;	// 0x32c36151
- (void)resetWithDataPointCount:(unsigned)dataPointCount;	// 0x32cc189d
- (void)setupBufferForValues:(unsigned)values;	// 0x32c35b6d
@end

