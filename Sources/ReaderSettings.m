//
//  ReaderSettings.m
//  Pods
//
//  Created by Felipe Lobo on 29/05/13.
//
//

#import "ReaderSettings.h"

@implementation ReaderSettings

+ (ReaderSettings *)defaultSettings
{
	ReaderSettings *settings = [[ReaderSettings alloc] init];
	
	settings.bookmarking = YES;
	settings.mailEnabled = YES;
	settings.printingEnabled = YES;
	settings.thumbsEnabled = YES;
	settings.previewEnabled = YES;
	settings.retinaDisabled = NO;
	settings.idleTimeDisabled = NO;
	settings.showShadows = YES;
	settings.standalone = NO;
	settings.showMainPagebar = YES;
	settings.showMainToolbar = YES;
	
	return settings;
}

@end
