# ArmStamper
ArmStamper is an *AI robotic arm paper-stamping station* with a Hugging Face LeRobot arm and a **custom electronic stamper**. Using imitation learning, the robot arm learns to receive a sheet of paper, stamp it and give it back to the user.

*Made for Hack Club Stasis ^^*

## Why I Made This Project
After receiving a Hugging Face LeRobot arm through Hack Club Prototype, I wanted to further practice **imitation learning** and train the arm with data of better quality and bigger amount. This project gives a structured environment with additional custom hardware *(the stamper)* for recording episodes and training an ACT model.

**Photos:**

<img width="990" height="766" alt="image" src="https://github.com/user-attachments/assets/8a888fc1-7ad8-4bbb-80e3-0c29562a8654" />
<img width="990" height="809" alt="image" src="https://github.com/user-attachments/assets/f22bf8d9-41d8-44c1-b281-8fc25ad3e985" />
<img width="990" height="735" alt="image" src="https://github.com/user-attachments/assets/708557c2-dce6-48a3-8041-d9ebbc439bd9" />



**Note: the arm in this assembly is a [Standard Open SO-101 Arm from GrabCAD](https://grabcad.com/library/standard-open-so-101-arms-with-parallel-gripper-1). I added it because I could not find an assembled version of LeRobot arm parts online. In this project, I will use the [Hugging Face LeRobot SO-101 Arm](https://huggingface.co/docs/lerobot/so101) instead.*

## How It Works
1. The user places a sheer of paper in the workspace
2. The LeRobot arm picks up the paper
3. Puts inside the stamper
4. Activates the stamping mechanism
5. Removes the stamped paper
6. Hands it back to the user

The arm learns this task through **imitation learning** using demonstration data recorded by me.

**Wiring Diagram:**

<img width="1000" height="620" alt="Screenshot from 2026-06-07 18-53-18" src="https://github.com/user-attachments/assets/f9987e3e-6812-42f6-b7cf-12b9bb5880c6" />

## Bill of Materials (BOM)

| Item | Purpose | Quantity | Cost |
|------|---------|----------|------|
| PLA Filament | 3D printing project components | 1 | $0.00 (Owned) |
| [Mounting Tape](https://a.co/d/09au4UI1) | Mounting components into the environment | 1 | $2.99 |
| [LeRobot Arm](https://huggingface.co/docs/lerobot/so101) | Robotic arm used for imitation learning training | 1 | $0.00 (Owned)|
| [Mini Breadboard with Jumper Wires](https://a.co/d/0cUBPXr7) | Wiring the circuit | 1 | $6.99 |
| [AA Batteries](https://a.co/d/07304Eiz) | Powering the stamper | 4 | $6.49 |
| [4 AA Battery Holder](https://a.co/d/0gbvKvxm) | Holding and connecting the batteries | 1 | $4.99 |
| [Arcade Button](https://a.co/d/08g8xGsk) | Triggers the stamping process | 1 | $11.99 |
| [Arduino Nano](https://a.co/d/0bd2Y9na) | Controls servo movement | 1 | $15.99 |
| [Feetech FS90R Servo Motor](https://www.amazon.com/DIYmalls-Feetech-Continuous-Rotation-Microbit/dp/B092VN3MTX/ref=sr_1_3?crid=2O0NKBUQIUN7W&dib=eyJ2IjoiMSJ9.K-YOz0eSs79N-78F03SHqDiCPTEHwMLmLJfx6Yxnpv84FddGMdaTXJoqlo7Y9CjhLt1-miEfe6rzqp1Ew6xEtanvJV7PQqoYgFWNdzoMN9bmHQsp_3qaZu1M7fnBdPTVC3K-DycLDxf1gLco9lxA2QilbpEIIwe3wN9VAlmoY0fyYhdrXSCceogln6LWmzoYXbEwRv8_5fyTAfgFoLcqndqxGKuBXd3FmuUtmjI3rZZ-QboFNb8Eya7Z2sZ2M0nN1YEpDA0MG1X6mlCf2XZ-3cML77QugJU8JVh6msmU48U.P__iqCjUvG30lf09KaUwhz3BEBa2_qD5bC2SG0I-hXg&dib_tag=se&keywords=Feetech+FS90R+9g+micro+servo&qid=1780646878&refinements=p_36%3A-1400&rnid=386491011&s=toys-and-games&sprefix=feetech+fs90r+9g+micro+servo%2Ctoys-and-games%2C125&sr=1-3) | Provides motion for the stamper mechanism | 1 | $8.99 |
| M3 Screws and Nuts | Assembling printed components | Various | $0.00 (Owned) |

**Total Cost:** **$58.43** *(excluding taxes and materials already owned)*

*Note: I checked the prices/shipping/fees of most of the parts on AliExpress and the difference is ~$15 AND the parts will arrive only after Stasis deadline (after June 30) if I were to order from AliExpress :_) I also have Amazon Prime, so there will be no shipping fee if I order from Amazon*

## References 

I used some external resources in this project for learning and visualization purposes.

### Tutorials and Documentation

Hugging Face LeRobot Documentation: used to learn the ACT imitation learning and arm setup processes

https://huggingface.co/docs/lerobot/index



DIY Linear Servo Actuator video by Potent Printables: used the gears for servo linearization mechanism in the stamper

https://youtu.be/2vAoOYF3m8U?si=TUcUIDMITSFrfjOI



### CAD Models

Feetech FS90R Servo Motor CAD model from GrabCAD for visualization purposes in my CAD Assembly

https://grabcad.com/library/fitec-fs90r-micro-servo-1



Standard Open SO-101 Arm CAD model from GrabCAD for visualization purposes in my CAD Assembly

https://grabcad.com/library/standard-open-so-101-arms-with-parallel-gripper-1
