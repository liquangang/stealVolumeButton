//
//  ViewController.h
//  VolumeSnap
//
//  Created by Randall Brown on 11/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RBVolumeButtons;

@interface ViewController : UIViewController
{
    float _launchVolume;
    int _counter;
}

@property (nonatomic, retain) RBVolumeButtons *buttonStealer;

@property (nonatomic) IBOutlet UILabel *counterLabel;

@end
