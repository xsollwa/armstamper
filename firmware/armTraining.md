# Arm Training

The arm will be trained using **ACT imitation learning** through the Hugging Face LeRobot framework. 

**To train the model**, I will *record episodes* of myself completing the stamping task with the arm through *teleoperation*. These demonstrations will then be used to train the ACT model. 

The task will include
1) Picking up a sheet of paper
2) Placing the paper under the stamper
3) Pressing the arcade button
4) Picking up the paper from the stamper
5) Returning the paper to the user

I will be referring to this [**Hugging Face LeRobot Imitation Training Guide**](https://huggingface.co/docs/lerobot/il_robots) when setting up and training the arm.
