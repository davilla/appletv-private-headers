/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterTerminalHelper.h"


@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
	int _terminalStatus;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x368bc405
- (id)initWithConfigurationState:(id)configurationState terminalStatus:(int)status;	// 0x368bc419
- (int)status;	// 0x368bc4c9
@end

