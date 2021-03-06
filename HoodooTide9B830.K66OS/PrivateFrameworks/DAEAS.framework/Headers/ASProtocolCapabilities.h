/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ASProtocolCapabilities : NSObject {
	NSString *_calConstraintsPlistPath;	// 4 = 0x4
	NSString *_abConstraintsPlistPath;	// 8 = 0x8
}
- (id)initWithProtocolVersionString:(id)protocolVersionString;	// 0x31866d75
- (id)_abConstraintsPlistPath;	// 0x31866fbd
- (id)_calConstraintsPlistPath;	// 0x31866f19
- (id)addressBookConstraintsPath;	// 0x31867019
- (id)calendarConstraintsPath;	// 0x31866f75
- (void)dealloc;	// 0x31866e7d
- (BOOL)serverUpdatesAttendeeStatusOnEvents;	// 0x31866f15
- (BOOL)supportsEmailFlagging;	// 0x31866f09
- (BOOL)supportsItemOperationsCommand;	// 0x31866f11
- (BOOL)supportsMailboxSearch;	// 0x31866f05
- (BOOL)supportsProtocolVersion:(id)version;	// 0x31866edd
- (BOOL)supportsSettingsCommand;	// 0x31866f0d
@end

