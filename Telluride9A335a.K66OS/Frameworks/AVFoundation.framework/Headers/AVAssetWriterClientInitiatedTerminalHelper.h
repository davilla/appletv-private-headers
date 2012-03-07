/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterTerminalHelper.h"


@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
@private
	int _terminalStatus;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x3231a9c5
- (id)initWithConfigurationState:(id)configurationState terminalStatus:(int)status;	// 0x3231bee1
- (void)cancelWriting;	// 0x3231bf9d
- (int)status;	// 0x323193ad
@end
